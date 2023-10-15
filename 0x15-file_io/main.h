#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <elf.h>

#define NULL ((void *)0)
#define BUFFER_SIZE 1024

ssize_t read_textfile(const char *filename, size_t letters);
int append_text_to_file(const char *filename, char *text_content);
int create_file(const char *filename, char *text_content);
void hd_err(int prog, const char *msg_sk, char *filename);
void hd_close(int prog, const char *msg_sk, int fd_value);
void cp(char *src_file, char *dest_file);
void h_error(const char *msg);
int magic_cmp(const unsigned char *magic, const unsigned char *exp_magic);
const char *get_osabi_desc(unsigned char osabi);
const char *get_type(Elf64_Half e_type);
void print_header(Elf64_Ehdr *header);
void display_elf_header(const char *filename);

#endif /* MAIN_H */
