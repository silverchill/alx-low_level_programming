#include <stdio.h>
#include <unistd.h>
/**
 *main - To print to a standard error
 *Return: 0 (Successful)
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fwrite(str, sizeof(char), sizeof(str) - 1, stdout);
	
	return (0);
}
