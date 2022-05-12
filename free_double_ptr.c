#include "shell.h"

/**
 * free_double_ptr - free malloced arrays
 * @str: array of strings
 * Authors: Promise Oluchime & Bakare Rilwan
 * Return: void
 */
void free_double_ptr(char **str)
{
	int i = 0;

	while (str[i] != NULL)
	{
		free(str[i]);
		i++;
	}
	free(str);
}
