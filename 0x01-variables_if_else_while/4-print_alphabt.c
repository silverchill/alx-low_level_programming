#include <stdio.h>
/**
 *main - To print the lower case alphabets except q and e
 *Return: 0 (Successful)
 */
int main(void)
{
	int s = 97;

	while (s <= 122)
	{
		if (s == 101 || s == 113)
		{
			s++;
			continue;
		}
		putchar(s);
		s++;
	}
	putchar('\n');
	return (0);
}
