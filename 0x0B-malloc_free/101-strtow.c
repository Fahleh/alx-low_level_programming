#include "main.h"
#include <stdlib.h>

void util(char **, char *);
void create_word(char **, char *, int, int, int);

/**
 * strtow:- A function that splits a string into words.
 *
 * @str: the string
 *
 * Return: returns a pointer to an array of strings (words)
 */

char **strtow(char *str)
{
	int i;
	int flag, len;
	char **words;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);

	i = flag = len = 0;

	while (str[i])
	{
		if (flag == 0 && str[i] != ' ')
			flag = 1;
		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			flag = 0;
			len++;
		}
		i++;
	}

	len += flag == 1 ? 1 : 0;

	if (len == 0)
		return (NULL);

	words = (char **)malloc(sizeof(char *) * (len + 1));

	if (words == NULL)
		return (NULL);

	util(words, str);
	words[len] = NULL;

	return (words);
}

/**
 * util:- A util function for fetching words into an array
 *
 * @words: Strings array
 * @str: String
 *
 * Return: Void
 */

void util(char **words, char *str)
{
	int i, j;
	int start, flag;

	i = j = flag = 0;

	while (str[i])
	{
		if (flag == 0 && str[i] != ' ')
		{
			start = i;
			flag = 1;
		}

		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			create_word(words, str, start, i, j);
			j++;
			flag = 0;
		}

		i++;
	}

	if (flag == 1)
		create_word(words, str, start, i, j);
}

/**
 * create_word:- A function to create a word and
 * insert it into the array
 *
 * @words: Array of strings
 * @str: String
 * @start: Starting index of the word
 * @end: Stop index of the word
 * @index: Index of the array to insert the word
 *
 * Return: Void
 */

void create_word(char **words, char *str, int start, int end, int index)
{
	int i, j;

	i = end - start;

	words[index] = (char *)malloc(sizeof(char) * (i + 1));

	for (j = 0; start < end; start++, j++)
		words[index][j] = str[start];
	words[index][j] = '\0';
}
