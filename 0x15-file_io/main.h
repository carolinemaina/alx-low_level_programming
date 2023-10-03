#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#include <elf.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void fd_close(int fd);
char *buff_mem(char *filename);

/* Elf Function prototypes */
void checkelf(unsigned char *e_ident);
void printmagic(unsigned char *e_ident);
void printclass(unsigned char *e_ident);
void printdata(unsigned char *e_ident);
void printversion(unsigned char *e_ident);
void printabi(unsigned char *e_ident);
void printosabi(unsigned char *e_ident);
void printtype(unsigned int e_type, unsigned char *e_ident);
void printentry(unsigned long int e_entry, unsigned char *e_ident);
void closeelf(int elf);
int main(int __attribute__((__unused__)) argc, char *argv[]);

#endif
