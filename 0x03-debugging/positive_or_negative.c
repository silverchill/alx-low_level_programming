#include "main.h"
/**
 * positive_or_negative - To determine if a certain  number is +, - or 0.
 *
 * Return: 0 (Successful)
 */
void positive_or_negative(int i)
{
        if (i > 0)
        {
                printf("%d is positive\n", i);
        }
        else if (i == 0)
        {
                printf("%d is zero\n", i);
        }
        else
        {
                printf("%d is negative\n", i);
        }
}
