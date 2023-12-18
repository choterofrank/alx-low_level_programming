#include<stdio.h>
#include<stdlib.h>
#include<elf.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

void evalu_elf(unsigned char *e_ident);
void _print_class(unsigned char *e_ident);
void _print_magic(unsigned char *e_ident);
void _print_version(unsigned char *e_ident);
void _print_data(unsigned char *e_ident);
void _print_abi(unsigned char *e_ident);
void _print_abios(unsigned char *e_ident);
void _print_entry(unsigned long int e_entry, unsigned char *e_ident);
void _print_type(unsigned int e_type, unsigned char *e_ident);
void close_elf(int elf);



/**
* main - shows the info the ELF header entails.
* @argc: numb of arguments provided to the program
* @argv: array of pointers of the arguments.
* Return: 0 on success
* Description: If file is not an ELF File or the function fails - exit code 98
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
Elf64_Ehdr *header;
int on, rd;

on = open(argv[1], O_RDONLY);
if (on == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
exit(98);
}
header = malloc(sizeof(Elf64_Ehdr));
if (header == NULL)
{
close_elf(on);
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
exit(98);
}
rd = read(on, header, sizeof(Elf64_Ehdr));
if (rd == -1)
{
free(header);
close_elf(on);
dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
exit(98);
}
evalu_elf(header->e_ident);
printf("ELF Header:\n");
_print_magic(header->e_ident);
_print_class(header->e_ident);
_print_data(header->e_ident);
_print_version(header->e_ident);
_print_abios(header->e_ident);
_print_abi(header->e_ident);
_print_type(header->e_type, header->e_ident);
_print_entry(header->e_entry, header->e_ident);

free(header);
close_elf(on);
return (0);
}



/**
* evalu_elf - it looks if a file is an ELF file
* @e_ident: pointer to the array holding the ELF magic numbs
* Description: if file is not an ELF file - exit code 98.
*/
void evalu_elf(unsigned char *e_ident)
{
int x;

for (x = 0; x < 4; x++)
{
if (e_ident[x] != 127 &&
e_ident[x] != 'E' &&
e_ident[x] != 'L' &&
e_ident[x] != 'F')
{
dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
exit(98);
}
}
}



/**
* _print_class - displays the class of an ELF header file
* @e_ident: pointer to an array with the ELF class
*/
void _print_class(unsigned char *e_ident)
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
printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}
}



/**
* _print_magic - displays the magic numbs of an ELF header file
* @e_ident: pointer to an array keeping the ELF magic numbs
*/
void _print_magic(unsigned char *e_ident)
{
int x;

printf("  Magic:   ");

for (x = 0; x < EI_NIDENT; x++)
{
printf("%02x", e_ident[x]);

if (x == EI_NIDENT - 1)
printf("\n");
else
printf(" ");
}
}


/**
* _print_version - displays the version of an ELF header file
* @e_ident: pointer to an array keeping the ELF version
*/
void _print_version(unsigned char *e_ident)
{
printf("  Version:                           %d",
e_ident[EI_VERSION]);

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
* _print_data - displays the data of an ELF header file
* @e_ident: pointer to an array holding the ELF data
*/
void _print_data(unsigned char *e_ident)
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
printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}
}



/**
* _print_abios - displays the OS/ABI of an ELF header file
* @e_ident: pointer to an array keeping the version
*/
void _print_abios(unsigned char *e_ident)
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
* _print_abi -  displays the ABI version of ELF header
* @e_ident: pointer to an array holding the ELF ABI version
*/
void _print_abi(unsigned char *e_ident)
{
printf("  ABI Version:                       %d\n",
e_ident[EI_ABIVERSION]);
}

/**
* _print_type - displays the type of an ELF header
* @e_type: the ELF type to be printed
* @e_ident: pointer to an array with the ELF class
*/
void _print_type(unsigned int e_type, unsigned char *e_ident)
{
if (e_ident[EI_DATA] == ELFDATA2MSB)
e_type >>= 8;

printf("  Type:                              ");

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
* _print_entry - displays entry point of an ELF header file
* @e_entry: address of ELF entry point
* @e_ident: pointer to array having the ELF class.
*/
void _print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
printf("  Entry point address:               ");

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
* close_elf - it closes ELF file
* @elf: file descriptor of ELF file
*/
void close_elf(int elf)
{
if (close(elf) == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't close fd %d\n", elf);
exit(98);
}
}

