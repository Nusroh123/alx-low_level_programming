#include "main.h"
#include <stdlib.h>
#include <string.h>

void free_words(char **words);
int count_words(char *str);
/**
 * strtow - splts a string into words
 * @str: string
 * Return: pointer or NULL
 */
char **strtow(char *str)
{
	int num_words, word_count;
	char **words, *token;

	if (str == NULL || *str == '\0')
		return (NULL);

	num_words = count_words(str);
	words = (char **)malloc((num_words + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);

	word_count = 0;
	token = strtok(str, " ");

	while (token != NULL)
	{
		words[word_count] = strdup(token);

		if (words[word_count] == NULL)
		{
			free_words(words);
			return (NULL);
		}

		word_count++;
		token = strtok(NULL, " ");
	}

	words[word_count] = NULL;

	return (words);
}

/**
 * count_words - counts the number of words in the string
 * it checks for spaces as word separator
 * @str: string
 * Return: number counted
 */
int count_words(char *str)
{
	int count, word;

	count = 0;
	word = 0;

	while (*str != '\0')
	{
		if (*str == ' ')
			word = 0;
		else if (word == 0)
		{
			word = 1;
			count++;
		}

		str++;
	}

	return (count);
}

/**
 * free_words - free the allocated space
 * for words array
 * @words: array
 * Return: Nothing
 */

void free_words(char **words)
{
	int i;

	if (words == NULL)
		return;

	i = 0;

	while (words[i] != NULL)
	{
		free(words[i]);
		i++;
	}

	free(words);
}
