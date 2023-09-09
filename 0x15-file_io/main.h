#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <elf.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
char *buff(char *f);
int main(int argc, char *argv[]);
void close_f(int fd, const char *filename);
void get_elf(unsigned char *e);
void p_magic(unsigned char *e);
void p_class(unsigned char *e);
void p_data(unsigned char *e);
void p_version(unsigned char *e);
void p_abi(unsigned char *e);
void p_osabi(unsigned char *e);
void p_type(unsigned int type, unsigned char *e);
void p_entry(unsigned long int entry, unsigned char *e);
void close_elf(int elf);

#endif
