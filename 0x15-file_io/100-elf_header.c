#include "main.h"

/**
 * main - Entry point
 * @ac: argument count
 * @av: argument vector
 * Return: 0 on success
 */
int main(int ac, char *av[])
{
	int fd;

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

	Elf64_Ehdr elfHeader;
	if (read(fd,&elfHeader, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		perror("Error reading ELF header");
		close(fd);
		return (1);
	}

	printf("ELF Header Information:\n");
	printf("  Magic: %02x %02x %02x ...\n", elfHeader.e_ident[0], elfHeader.e_ident[1], elfHeader.e_ident[2]);
	printf("  Type: %u\n", elfHeader.e_type);
	printf("  Machine: %u\n", elfHeader.e_machine);
	printf("  Version: %u\n", elfHeader.e_version);

	close(fd);
	return (0);
}
