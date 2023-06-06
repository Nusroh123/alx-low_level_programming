#include <unistd.h>
#include <sys/syscall.h>
#include <string.h>

/**
 * main - Entry point
 * Return: 0 on success
 */
int main(void)
{
	char err[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, err, strlen(err));
	return (1);
}
