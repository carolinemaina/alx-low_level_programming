#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void fd_close(int fd);
char *buff_mem(char *filename);

/* Elf Function prototypes */
void checkElfFileType(unsigned char *e_ident);
void printElfMagicNumbers(unsigned char *e_ident);
void printElfClass(unsigned char *e_ident);
void printElfDataEncoding(unsigned char *e_ident);
void printElfFileVersion(unsigned char *e_ident);
void printElfOSABI(unsigned char *e_ident);
void printElfABIVersion(unsigned char *e_ident);
void printElfType(unsigned int e_type, unsigned char *e_ident);
void printElfEntryPoint(unsigned long int e_entry, unsigned char *e_ident);
void closeElfFile(int elf);

#endif
