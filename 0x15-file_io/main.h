#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

#define NULL ((void *)0)
#define BUFFER_SIZE 1024

ssize_t read_textfile(const char *filename, size_t letters);
int append_text_to_file(const char *filename, char *text_content);
int create_file(const char *filename, char *text_content);
/* void cp(int orig, int dest_sk); */
void hd_err(int prog, const char *msg_sk);

#endif /* MAIN_H */
