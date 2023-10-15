#include <stdio.h>
#include "main.h"

/**
 * h_error - Prints error message
 * @msg: message
 */
void h_error(const char *msg)
{
	dprintf(2, "%s\n", msg);
	exit(98);
}

/**
 * magic_cmp - Compare magic
 * @magic: First magic
 * @exp_magic: Second magic
 *
 * Return: 0 or 1
 */
int magic_cmp(const unsigned char *magic, const unsigned char *exp_magic)
{
	int i = 0;

	while (i < SELFMAG)
	{
		if (magic[i] != exp_magic[i])
			return (0);
		i++;
	}
	return (1);
}

/**
 * get_osabi_desc - Get OS/ABI description
 * @osabi: OS/ABI
 *
 * Return: Description
 */
const char *get_osabi_desc(unsigned char osabi)
{
	switch (osabi)
	{
	case 0: return ("UNIX - System V");
	case 1: return ("UNIX - HP-UX");
	case 2: return ("UNIX - NetBSD");
	case 3: return ("UNIX - GNU");
	case 4: return ("Hurd");
	case 6: return ("UNIX - Solaris");
	case 7: return ("AIX");
	case 8: return ("IRIX");
	case 9: return ("FreeBSD");
	default: return ("<unknown: 53>");
	}
}

/**
 * get_type - Gets type
 * @e_type: e_type
 *
 * Return: Constant string
 */
const char *get_type(Elf64_Half e_type)
{
	switch (e_type)
	{
	case ET_NONE: return ("NONE (No file type)");
	case ET_REL: return ("REL (Relocatable file)");
	case ET_EXEC: return ("EXEC (Executable file)");
	case ET_DYN: return ("DYN (Shared object file)");
	case ET_CORE: return ("CORE (Core file)");
	default: return ("UNKNOWN (Unknown file type)");
	}
}

/**
 * print_header - Prints header
 * @header: Header
 */
void print_header(Elf64_Ehdr *header)
{
	const char *type_str, *osabi_description;
	unsigned char osabi = header->e_ident[EI_OSABI];
	int i = 0;

	printf("ELF Header:\n");
	printf("%sMagic:   ", "  ");
	while (i < EI_NIDENT)
	{
		printf("%02x", header->e_ident[i]);
		if (i < EI_NIDENT - 1)
			printf(" ");
		i++;
	}
	printf("\n%sClass:                             ", "  ");
	printf("%s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("%sData:                              ", "  ");
	if (header->e_ident[EI_DATA] == ELFDATA2LSB)
	printf("2's complement, little endian\n");
	else
	printf("2's complement, big endian\n");
	printf("%sVersion:                           ", "  ");
	printf("%u", header->e_ident[EI_VERSION]);
	if (header->e_ident[EI_VERSION] == EV_CURRENT)
		printf(" (current)\n");
	else
		printf("\n");
	osabi_description = get_osabi_desc(osabi);
	printf("%sOS/ABI:                            ", "  ");
	printf("%s\n", osabi_description);
	printf("%sABI Version:                       ", "  ");
	printf("%u\n", header->e_ident[EI_ABIVERSION]);
	type_str = get_type(header->e_type);
	printf("%sType:                              ", "  ");
	printf("%s\n", type_str);
	printf("%sEntry point address:               ", "  ");
	printf("0x%1x\n", (unsigned int)header->e_entry);
}

/**
 * display_elf_header - Displays elf header
 * @filename: Filename
 */
void display_elf_header(const char *filename)
{
	int fd;
	Elf64_Ehdr header;
	unsigned char magic[SELFMAG];
	unsigned char exp_magic[SELFMAG] = {ELFMAG0, ELFMAG1, ELFMAG2, ELFMAG3};

	if (filename == NULL)
	h_error("Error: File does not exist.");

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	h_error("Error: File cannot be opened.");

	if (read(fd, magic, SELFMAG) != SELFMAG)
	{
		close(fd);
		h_error("Error: ELF magic numbers cannot be read.");
	}

	if (lseek(fd, 0, SEEK_SET) == -1)
	{
		close(fd);
		h_error("Error: Unable to seek to beginning of the file");
	}

	if (!magic_cmp(magic, exp_magic))
	{
		close(fd);
		h_error("Error: File is not ELF file.");
	}

	if (read(fd, &header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		close(fd);
		h_error("Error: Unable to read elf header.");
	}

	print_header(&header);
	close(fd);
}

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: List
 *
 * Return: 0 on success or exit(98) on failure
 */
int main(int argc, char *argv[])
{

	if (argc != 2)
	{
		dprintf(2, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}
	display_elf_header(argv[1]);
	return (0);
}

