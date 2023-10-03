#include "main.h"
#include <elf.h>

/**
 * main - Displays the information contained in the
 * ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success
 */
int main(int argc, char *argv[])
	{
	Elf64_Ehdr *header;
	int fileDescriptor, bytesRead;

	if (argc != 2)
	{
	fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
	exit(EXIT_FAILURE);
		}

	fileDescriptor = open(argv[1], O_RDONLY);
	if (fileDescriptor == -1)
	{
		perror("Error: Can't open file");
		exit(EXIT_FAILURE);
	}

	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{	
		perror("Error: Memory allocation failed");
		closeElfFile(fileDescriptor);
		exit(EXIT_FAILURE);
	}

	bytesRead = read(fileDescriptor, header, sizeof(Elf64_Ehdr));
	if (bytesRead == -1)
	{
		perror("Error: Read failed");
		free(header);
				closeElfFile(fileDescriptor);
		exit(EXIT_FAILURE);
	}

checkElfFileType(header->e_ident);

printf("ELF Header:\n");
printElfMagicNumbers(header->e_ident);
printElfClass(header->e_ident);
printElfDataEncoding(header->e_ident);
printElfFileVersion(header->e_ident);
printElfOSABI(header->e_ident);
printElfABIVersion(header->e_ident);
printElfType(header->e_type, header->e_ident);
printElfEntryPoint(header->e_entry, header->e_ident);

free(header);
closeElfFile(fileDescriptor);
return EXIT_SUCCESS;
}

/**
 * checkElfFileType - Function to check if the file is an ELF file
 * @e_ident: pointer to an array containing the ELF class
 */
void checkElfFileType(unsigned char *e_ident)
{
	for (int index = 0; index < 4; index++)
	{
		if (e_ident[index] != 127 &&
		e_ident[index] != 'E' &&
		e_ident[index] != 'L' &&
		e_ident[index] != 'F')
		{
			fprintf(stderr, "Error: Not an ELF file\n");
			exit(EXIT_FAILURE);
		}
		}
	}

/**
 * printElfMagicNumbers - Function to print ELF magic numbers
 * @e_ident: pointer to an array containing the ELF class
 */
void printElfMagicNumbers(unsigned char *e_ident)
{
	printf(" Magic: ");
	for (int index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", e_ident[index]);
		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * printElfClass - Function to print ELF class
 * @e_ident: pointer to an array containing the ELF class
 */
void printElfClass(unsigned char *e_ident)
{
	printf(" Class: ");

	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * printElfDataEncoding - Function to print ELF data encoding
 * @e_ident: pointer to an array containing the ELF class
 */
void printElfDataEncoding(unsigned char *e_ident)
{
	printf(" Data: ");

	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_DATA]);
	}
}

/**
 * printElfFileVersion - Function to print ELF file version
 * @e_ident: pointer to an array containing the ELF class
 */
void printElfFileVersion(unsigned char *e_ident)
{
	printf(" Version: %d", e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}

/**
 * printElfOSABI - Function to print ELF OS/ABI
 * @e_ident: pointer to an array containing the ELF class
 */
void printElfOSABI(unsigned char *e_ident)
{
	printf(" OS/ABI: ");

	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * printElfABIVersion - Function to print ELF ABI version
 * @e_ident: pointer to an array containing the ELF class
 */
void printElfABIVersion(unsigned char *e_ident)
{
	printf(" ABI Version: %d\n", e_ident[EI_ABIVERSION]);
}

/**
 * printElfType - Function to print ELF type
 * @e_type: elf type
 * @e_ident: pointer to an array containing the ELF class
 */
void printElfType(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf(" Type: ");

	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
			
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
	}
}

/**
 * printElfEntryPoint - Function to print ELF entry point
 * @e_entry: entry
 * @e_ident: pointer to an array containing the ELF class
 */
void printElfEntryPoint(unsigned long int e_entry, unsigned char *e_ident)
{
	printf(" Entry point address: ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);
	else
		printf("%#lx\n", e_entry);
}

/**
 * closeElfFile - Function to close the ELF file
 * @elf: file for closing
 */
void closeElfFile(int elf)
{
	if (close(elf) == -1)
	{
		perror("Error: Can't close file");
		exit(EXIT_FAILURE);
	}
}
