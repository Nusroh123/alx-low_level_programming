#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	print("Size of char: %lu byte(s)", sizeof(char));
	print("Size of int: %lu byte(s)", sizeof(char));
	print("Size of long int: %lu byte(s)", sizeof(long int));
	print("Size of long long int: %lu byte(s)", sizeof(long long int));
	print ("Size of float: %lu byte(s)", sizeof(float));	
	
	return (0);
}

