#include "shell.h"


/**
* _putchar - this function prints a character to the standard output.
* @c: character to be printed.
* Return: the printed character to stdout.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* ldb_strncmp - this function comares two strings
* @str1: first strng to be comapred.
* @str2: second sring to be compared.
* @num: byte size to be comapared.
* Return: 0 on success.
*/

int ldb_strncmp(char *str1, char *str2, int num)
{
	int j = 0, i = 0;

	while ((*str1 != '\0' || *str2 != '\0') && i < num)
	{
		if (*str1 != *str2)
		{
			j = j + 1;
		}

		str1 = str1 + 1;

		str2 = str2 + 1;

		i = i + 1;
	}

	if (j != 0)
	{
		return (-1);
	}

	return (j);
}
