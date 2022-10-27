#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @word: pointer to string
 *
 * Return: Pointer to uppercase string
 */
char *string_toupper(char *word)
{
	int i;

	i = 0;

	while (word[i] != '\0')
	{
		if (word[i] >= 97 && word[i] <= 122)
		{
			word[i] = word[i] - 32;
		}
		i++;
	}
	return (word);
}
