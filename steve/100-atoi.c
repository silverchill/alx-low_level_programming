#include "main.h"

/**
 *_atoi - To print a function that convert a string to an integer
 *@s: string
 *Return: 0
 */
int _atoi(char *s)
{
	int sign = 1;
	int k = 0;
	unsigned int unsign = 0;

	while (!(s[k] <= '9' && s[k] >= '0') && s[k] != '0')
	{
		if (s[k] == '-')
			sign *= -1;
		k++;
	}
	while (s[k] <= '9' && (s[k] >= '0' && s[k] != '\0'))
	{
		unsign = (unsign * 10) + (s[k] - '0');
		k++;
	}
	unsign *= sign;
	return (unsign);
}
