#include <stdlib.h>

/**
 * argstostr:- A function that concatenates all the arguments 
 * of your program
 * 
 * @ac: Number of arguments
 * @av: Array of arguments
 *
 * Return: A pointer to a new string, or NULL
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, len;

	if (!ac || !av)
		return (NULL);

	for (i = 0, len = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			str[k] = av[i][j];
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';

	return (str);
}
