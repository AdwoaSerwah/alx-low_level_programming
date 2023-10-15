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
void hd_err(int prog, const char *msg_sk, char *filename);
void hd_close(int prog, const char *msg_sk, int fd_value);
void cp(char *src_file, char *dest_file);

#endif /* MAIN_H */
