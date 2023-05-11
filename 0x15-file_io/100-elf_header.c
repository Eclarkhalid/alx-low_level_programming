#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#define BUF_SIZE 1024
/**
 * error_exit - prints an error message to stderr and exits with status 98
 * @msg: the error message to print
 */
void error_exit(char *msg)
{
fprintf(stderr, "%s\n", msg);
exit(98);
}
/**
 * print_magic - prints the ELF magic numbers to stdout
 * @e_ident: pointer to the ELF header identification bytes
 */
void print_magic(unsigned char *e_ident)
{
printf("  Magic:   ");
for (int i = 0; i < EI_NIDENT; i++)
printf("%02x%c", e_ident[i], i == EI_NIDENT - 1 ? '\n' : ' ');
}
/**
 * print_class - prints the ELF class to stdout
 * @e_ident: pointer to the ELF header identification bytes
 */
void print_class(unsigned char *e_ident)
{
printf("  Class:                             ");
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
printf("<unknown: %d>\n", e_ident[EI_CLASS]);
}
}
/**
 * print_data - prints the ELF data encoding to stdout
 * @e_ident: pointer to the ELF header identification bytes
 */
void print_data(unsigned char *e_ident)
{
printf("  Data:                              ");
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
printf("<unknown: %d>\n", e_ident[EI_DATA]);
}
}
/**
 * print_version - prints the ELF version to stdout
 * @e_ident: pointer to the ELF header identification bytes
 */
void print_version(unsigned char *e_ident)
{
printf("  Version:                           %d (current)\n", e_ident[EI_VERSION]);
}

/**
 * print_osabi - prints the ELF OS/ABI to stdout
 * @e_ident: pointer to the ELF header identification bytes
 */
void print_osabi(unsigned char *e_ident)
{
printf("  OS/ABI:                            ");
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
case ELFOSABI_AIX:
printf("UNIX - AIX\n");
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
return (0);
}

