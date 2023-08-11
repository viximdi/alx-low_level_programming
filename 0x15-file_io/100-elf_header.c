#include <elf.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * verify_elf - Verifies if a file is an ELF file.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file - exit code 98.
 */
void verify_elf(unsigned char *e_ident)
{
	const char elf_magic[] = {0x7F, 'E', 'L', 'F'};

	if (memcmp(e_ident, elf_magic, sizeof(elf_magic)) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		exit(98);
	}
}


/**
 * print_elf_magic - Prints the magic numbers of an ELF header.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: Magic numbers are separated by spaces.
 */
void print_elf_magic(unsigned char *e_ident)
{
	int index;

	printf("  Magic:   %02x", e_ident[0]);

	for (index = 1; index < EI_NIDENT; index++)
	{
		printf(" %02x", e_ident[index]);
	}

	printf("\n");
}


/**
 * print_elf_class - Prints the class of an ELF header.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void print_elf_class(unsigned char *e_ident)
{
	const char *class_name;

	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			class_name = "none";
			break;
		case ELFCLASS32:
			class_name = "ELF32";
			break;
		case ELFCLASS64:
			class_name = "ELF64";
			break;
		default:
			class_name = "<unknown>";
			break;
	}

	printf("  Class:                             %s\n", class_name);
}


/**
 * print_elf_data - Prints the data encoding of an ELF header.
 * @e_ident: A pointer to an array containing the ELF data encoding.
 */
void print_elf_data(unsigned char *e_ident)
{
	const char *data_encoding;

	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			data_encoding = "none";
			break;
		case ELFDATA2LSB:
			data_encoding = "2's complement, little endian";
			break;
		case ELFDATA2MSB:
			data_encoding = "2's complement, big endian";
			break;
		default:
			data_encoding = "<unknown>";
			break;
	}

	printf("  Data:                              %s\n", data_encoding);
}



/**
 * print_elf_version - Prints the version of an ELF header.
 * @e_ident: A pointer to an array containing the ELF version.
 */
void print_elf_version(unsigned char *e_ident)
{
	printf("  Version:                           %d", e_ident[EI_VERSION]);

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
 * print_elf_osabi - Prints the OS/ABI of an ELF header.
 * @e_ident: A pointer to an array containing the ELF OS/ABI.
 */
void print_elf_osabi(unsigned char *e_ident)
{
	const char *osabi_name;

	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			osabi_name = "UNIX - System V";
			break;
		case ELFOSABI_HPUX:
			osabi_name = "UNIX - HP-UX";
			break;
		case ELFOSABI_NETBSD:
			osabi_name = "UNIX - NetBSD";
			break;
		case ELFOSABI_LINUX:
			osabi_name = "UNIX - Linux";
			break;
		case ELFOSABI_SOLARIS:
			osabi_name = "UNIX - Solaris";
			break;
		case ELFOSABI_IRIX:
			osabi_name = "UNIX - IRIX";
			break;
		case ELFOSABI_FREEBSD:
			osabi_name = "UNIX - FreeBSD";
			break;
		case ELFOSABI_TRU64:
			osabi_name = "UNIX - TRU64";
			break;
		case ELFOSABI_ARM:
			osabi_name = "ARM";
			break;
		case ELFOSABI_STANDALONE:
			osabi_name = "Standalone App";
			break;
		default:
			osabi_name = "<unknown>";
			break;
	}

	printf("  OS/ABI:                            %s\n", osabi_name);
}


/**
 * print_elf_abi - Prints the ABI version of an ELF header.
 * @e_ident: A pointer to an array containing the ELF ABI version.
 */
void print_elf_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
			e_ident[EI_ABIVERSION]);
}

/**
 * print_elf_type - Prints the type of an ELF header.
 * @e_type: The ELF type.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void print_elf_type(unsigned int e_type, unsigned char *e_ident)
{
	const char *type_name;

	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;


	switch (e_type)
	{
		case ET_NONE:
			type_name = "NONE (None)";
			break;
		case ET_REL:
			type_name = "REL (Relocatable file)";
			break;
		case ET_EXEC:
			type_name = "EXEC (Executable file)";
			break;
		case ET_DYN:
			type_name = "DYN (Shared object file)";
			break;
		case ET_CORE:
			type_name = "CORE (Core file)";
			break;
		default:
			type_name = "<unknown>";
			break;
	}

	printf("  Type:                              %s\n", type_name);
}


/**
 * print_elf_entry - Prints the entry point of an ELF header.
 * @e_entry: The address of the ELF entry point.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void print_elf_entry(unsigned long int e_entry, unsigned char *e_ident)
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
 * close_elf_file - Closes an ELF file.
 * @elf_fd: The file descriptor of the ELF file.
 *
 * Description: If the file cannot be closed - exit code 98.
 */
void close_elf_file(int elf_fd)
{
	if (close(elf_fd) == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", elf_fd);
		exit(98);
	}
}





/**
 * main - Displays the information stored in the ELF header of a file.
 * @argc: The number of arguments provided to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on successful execution.
 *
 * Description: If the file is not an ELF File or if the function fails,
 * the program exits with code 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *elf_header;
	int file_descriptor, read_status;

	file_descriptor = open(argv[1], O_RDONLY);
	if (file_descriptor == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	elf_header = malloc(sizeof(Elf64_Ehdr));
	if (elf_header == NULL)
	{
		close_elf_file(file_descriptor);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	read_status = read(file_descriptor, elf_header, sizeof(Elf64_Ehdr));
	if (read_status == -1)
	{
		free(elf_header);
		close_elf_file(file_descriptor);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	verify_elf(elf_header->e_ident);
	printf("ELF Header Information:\n");
	print_elf_magic(elf_header->e_ident);
	print_elf_class(elf_header->e_ident);
	print_elf_data(elf_header->e_ident);
	print_elf_version(elf_header->e_ident);
	print_elf_osabi(elf_header->e_ident);
	print_elf_abi(elf_header->e_ident);
	print_elf_type(elf_header->e_type, elf_header->e_ident);
	print_elf_entry(elf_header->e_entry, elf_header->e_ident);


	free(elf_header);
	close_elf_file(file_descriptor);
	return (0);
}
