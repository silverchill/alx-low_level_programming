#include "main.h"

/**
 *print_line - To draws a straight line in the terminal
 *@n: no of times to be printed
 *Return: 0
 */
void print_line(int n)
{
       if (n <= 0)
       {
	       _putchar('\n');
       }
       else
       {
	       int y;

	       for (y = 1; y <= n; y++)
	       {
		       _putchar('_');
	       }
	       _putchar('\n');
       }
}
