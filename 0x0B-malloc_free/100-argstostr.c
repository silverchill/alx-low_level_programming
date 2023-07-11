#include "main.h"

/**
 * argstostr - print a fxn that concatenates all the arguments of your program
 * @ac: argument
 * @av: argument
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int m = 0;
	int b, n, l;

	if (av == NULL || ac == 0)
		return (NULL);
	for (b = 0; b < ac; b++)
	{
		for (n = 0; av[b][n] != '\0'; n++)
			l++;
	}

	str = malloc(sizeof(char) * (l + 1));

	if (str == NULL)
		return (NULL);
	for (b = 0; b < ac; b++)
	{
		for (n = 0; av[b][n] != '\0'; n++)
		{
			str[m] = av[b][n];
			m++;
		}
		str[m] = '\n';
		m++;
	}
	return (str);
}
