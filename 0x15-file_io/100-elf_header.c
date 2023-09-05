#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void header_info(Elf64_Ehdr *header);

/**
 * check_elf - Checks if a file is an ELF file.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 */
void check_elf(unsigned char *e_ident)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (e_ident[index] != 127 &&
		    e_ident[index] != 'E' &&
		    e_ident[index] != 'L' &&
		    e_ident[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}


void header_info(Elf64_Ehdr *header)
{
	int index;

	printf("Elf Header:\n");
	printf(" Magic: ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%2x%s", header->e_ident[index], (index == EI_NIDENT - 1) ? "\n" : " ");
	}
	printf(" Class:                             %s\n", (header->e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "ELF32");
	printf(" Data:                             %s\n",
			(header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" :
			(header->e_ident[EI_DATA] == ELFDATA2MSB) ? "2's complement, big endian" : "unknown");
	printf(" Version:                             %d",
			header->e_ident[EI_VERSION]);
	printf((header->e_ident[EI_VERSION] == EV_CURRENT) ? " (current)\n" : "\n");
	printf(" OS/ABI:                             ");
	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE: printf("UNIX - System V\n"); break;
		case ELFOSABI_HPUX: printf("UNIX - HP-UX\n"); break;
		case ELFOSABI_NETBSD: printf("UNIX - NetBSD\n"); break;
		case ELFOSABI_LINUX: printf("UNIX - Linux\n"); break;
		case ELFOSABI_SOLARIS: printf("UNIX - Solaris\n"); break;
		case ELFOSABI_IRIX: printf("UNIX - IRIX\n"); break;
		case ELFOSABI_FREEBSD: printf("UNIX - FreeBSD\n"); break;
		case ELFOSABI_TRU64: printf("UNIX - TRU64\n"); break;
		case ELFOSABI_ARM: printf("ARM\n"); break;
		case ELFOSABI_STANDALONE: printf("Standalone App\n"); break;
		default: printf("<unknown: %x>\n", header->e_ident[EI_OSABI]);
	}
	printf(" ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
	printf(" Type: ");
	switch (header->e_type)
	{
		case ET_NONE: printf("NONE (None)\n"); break;
		case ET_REL: printf("REL (Relocatable file)\n"); break;
		case ET_EXEC: printf("EXEC (Executable file)\n"); break;
		case ET_DYN: printf("DYN (Shared object file)\n"); break;
		case ET_CORE: printf("CORE (Core file)\n"); break;
		default: printf("<unknown: %x>\n", header->e_type);
	}
	printf(" Entry point address: %#lx\n", (unsigned long)header->e_type);
}

int main(int argc, char *argv[])
{
	int fd, fr;
	Elf64_Ehdr *header;
	(void)argc;

	/* opening the file*/
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(98);
	}
	/* reading ELF header */
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		dprintf(STDERR_FILENO, "Error: malloc failed\n");
		exit(98);
	}
	fr = read(fd, header, sizeof(Elf64_Ehdr));
	if (fr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	/* check if file is Elf */
	check_elf(header->e_ident);
	/* print the display */
	header_info(header);
	close(fd);

	return (0);
}
