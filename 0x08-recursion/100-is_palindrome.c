#include "main.h"
#include <string.h>

int rec_is_palindrome(char *s, int start, int end);

/**
 * is_palindrome - check  if a string is a palindrome
 * @s: string
 * Return: 1 if it is palindrome, otherwise, 0
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (rec_is_palindrome(s, 0, len - 1));
}

/**
 * rec_is_palindrome - compare recursively
 * @s: string
 * @start: start of string
 * @end: end of string
 * Return: 1 if it is palindrome, otherwise, 0
 */
int rec_is_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (rec_is_palindrome(s, start + 1, end - 1));
}
