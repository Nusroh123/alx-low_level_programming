#include "main.h"

/**
 * display_elf_header - display ELF header
 * @header: header
 * Return: Nothing
 */
void display_elf_header(const Elf64_Ehdr *header)
{
	int i;

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++) 
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\nClass:   %u-bit\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? 64 : 32);
	printf("Data:    %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "Unknown");
	printf("Version: %d (current)\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI:  %s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Other");
	printf("ABI Version: %u\n", header->e_ident[EI_ABIVERSION]);
	printf("Type:    %u\n", header->e_type);
	printf("Entry point address: 0x%lx\n", (unsigned long)header->e_entry);
}

/**
 * main - Entry point
 * @ac: argument count
 * @av: argument vector
 * Return: 0 on success
 */
int main(int ac, char *av[])
{
	int fd;
	Elf64_Ehdr elfHeader;

	if (ac != 2)
	{
		fprintf(stderr, "Usage: %s <elf_filename>\n", av[0]);
		return (1);
	}

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		return (1);
	}

	if (read(fd,&elfHeader, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		perror("Error reading ELF header");
	}

	if (memcmp(elfHeader.e_ident, ELFMAG, SELFMAG) != 0)
		perror("Not an ELF file");

	display_elf_header(&elfHeader);

	close(fd);
	return (0);
}
