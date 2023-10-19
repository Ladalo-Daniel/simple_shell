#include "shell.h"

/**
* err_putchar - function that print single chars
*
* @c: chars printed
* Return: printed chars.
*/

int err_putchar(char c)
{
	return (write(STDERR_FILENO, &c, 1));
}

/**
* print_integer - A function thst print an int
* @val: int to be printed.
* Return: Always 0
*/

void print_integer(int val)
{
	int i, _idx = 0;

	char buf[12];

	if (val < 0)
	{
		err_putchar('-');
		val = -(val);
	}

	if (val == 0)
	{
		err_putchar('0');
		return;
	}

	while (val > 0)
	{
		buf[_idx] = '0' + (val % 10);

		val = val / 10;

		_idx = _idx + 1;
	}

	for (i = _idx - 1; i >= 0; i--)
	{
		err_putchar(buf[i]);
	}
}


/**
* _integer_length - this function counts the length of an integer.
* @integer: integer length to be counted.
* Return: lenght of the integer.
*/

int _integer_length(int integer)
{
	int ldb_actual_length = 0;

	if (integer == 0)
	{
		return (1);
	}

	if (integer < 0)
	{
		ldb_actual_length += 1;
		integer = -(integer);
	}

	do {
		ldb_actual_length += 1;
		integer /= 10;
	} while (integer > 0);

	return (ldb_actual_length);
}
