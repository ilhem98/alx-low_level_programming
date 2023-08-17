#include <stdio.h>
#include "main.h"
/**
 * positive_or_negative: determines positive or negative.
 * @i: The integer to be evaluated.
 * Description: This function takes an integer as input and checks its value.
 * Return: None
 */

void positive_or_negative(int i)
{
if (i > 0)
	printf("%d is positive\n", i);
else if (i == 0)
	printf("%d is zero\n", i);
else
	printf("%d is negative\n", i);
}
