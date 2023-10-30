#include "main.h"

void elf_checker(unsigned char *e_ident);
void display_elf_magic(unsigned char *e_ident);
void display_elf_class(unsigned char *e_ident);
void display_elf_data(unsigned char *e_ident);
void display_elf_version(unsigned char *e_ident);
void display_elf_abi(unsigned char *e_ident);
void display_elf_osabi(unsigned char *e_ident);
void display_elf_type(unsigned int e_type, unsigned char *e_ident);
void display_elf_entry(unsigned long int e_entry, unsigned char *e_ident);
void shutdown_elf(int elf);

/**
 * elf_checker - Validates whether the file is an ELF format.
 * @e_ident: Pointer to an array containing the ELF magic numbers.
 *
 * Description: Terminates with exit code 98 if the file isn't in ELF format.
 */
void elf_checker(unsigned char *e_ident)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (e_ident[i] != 127 &&
		    e_ident[i] != 'E' &&
		    e_ident[i] != 'L' &&
		    e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * display_elf_magic - Outputs the magic numbers within an ELF header.
 * @e_ident: Pointer to an array containing the ELF magic numbers.
 *
 * Description: Spaces separate the printed ELF magic numbers.
 */
void display_elf_magic(unsigned char *e_ident)
{
	int a;

	printf("  Magic:   ");

	for (a = 0; a < EI_NIDENT; a++)
	{
		printf("%02x", e_ident[a]);

		if (a == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * display_elf_class - Outputs the ELF header class.
 * @e_ident: Pointer to an array with the ELF class.
 */
void display_elf_class(unsigned char *e_ident)
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
 * display_elf_data - Displays the data in the ELF header.
 * @e_ident: Pointer to an array holding the ELF data.
 */
void display_elf_data(unsigned char *e_ident)
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
 * display_elf_version - Displays the ELF header version.
 * @e_ident: Pointer to an array with the ELF version.
 */
void display_elf_version(unsigned char *e_ident)
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
 * display_elf_osabi - Displays the OS/ABI in the ELF header.
 * @e_ident: Pointer to an array holding the ELF OS/ABI.
 */
void display_elf_osabi(unsigned char *e_ident)
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
 * display_elf_abi - Shows the ABI version in the ELF header.
 * @e_ident: Pointer to an array containing the ELF ABI version.
 */
void display_elf_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
	       e_ident[EI_ABIVERSION]);
}

/**
 * display_elf_type - Shows the type within an ELF header.
 * @e_type: The ELF type.
 * @e_ident: Pointer to an array holding the ELF class.
 */
void display_elf_type(unsigned int e_type, unsigned char *e_ident)
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
 * display_elf_entry - Displays the entry point in the ELF header.
 * @e_entry: The address of the ELF entry point.
 * @e_ident: Pointer to an array holding the ELF class.
 */
void display_elf_entry(unsigned long int e_entry, unsigned char *e_ident)
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
 * shutdown_elf - Closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 *
 * Description: Exits with code 98 if unable to close the file.
 */
void shutdown_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - Displaying the content within the ELF header of an ELF file.
 * @argc: Number of program arguments.
 * @argv: Array of argument pointers.
 *
 * Return: 0 if successful.
 *
 * Description: Exiting with code 98 in case of non-ELF file or failure
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int fd, s;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		shutdown_elf(fd);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	s = read(fd, header, sizeof(Elf64_Ehdr));
	if (s == -1)
	{
		free(header);
		shutdown_elf(fd);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	elf_checker(header->e_ident);
	printf("ELF Header:\n");
	display_elf_magic(header->e_ident);
	display_elf_class(header->e_ident);
	display_elf_data(header->e_ident);
	display_elf_version(header->e_ident);
	display_elf_osabi(header->e_ident);
	display_elf_abi(header->e_ident);
	display_elf_type(header->e_type, header->e_ident);
	display_elf_entry(header->e_entry, header->e_ident);

	free(header);
	shutdown_elf(fd);
	return (0);
}
