#include <stdio.h>
#include "main.h"

/**
 * _strcmp - function that compares two strings
 *
 * @s1: string one
 * @s2: string two
 * Return: value less than 0 if string less than the other
 * Value greater than 0 if string greater than the other
 * 0 if string equal
 */

int _strcmp(char *s1, char *s2)
{
	int counter, comVal;

	counter = 0;

	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}

	comVal = s1[counter] - s2[counter];
}

comVal = s1[counter] - s2[counter];
return (comVal);
}
