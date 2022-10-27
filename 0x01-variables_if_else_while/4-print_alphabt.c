#include <stdio.h>

/**
 * main - main function is print alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	c = 'a';

	while
		(c <= 'z')
		{
			if ((c != '9' && c != 'e') && c <= 'z')
				putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
