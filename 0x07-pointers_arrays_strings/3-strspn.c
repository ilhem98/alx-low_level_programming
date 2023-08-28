#include "main.h"
/** _strspn -Entry point
 * @s: input
 * @accpet: input
 * Return: Always 0 (Success)
 */
unsigned int_strspn'char *s, char *accept)
{
	unsigned int n = 0;
	int r;
	while (*s)
	{
		for (r=0;accept[r];r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else of (accept[r+1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
