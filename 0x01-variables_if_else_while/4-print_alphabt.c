#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 Always (success)
 */

int main(void)
{
	char c;

	c = 'a';
	while
	(c <= 'Z') {
		if ((c  != 'q' && c != 'e') && c <= 'z')
			putchar(c);
		c++;
	}
putchar('\n');
return (0);
}
