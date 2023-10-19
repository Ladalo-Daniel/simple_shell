#include "shell.h"

/**
* ldb_getline - A getline function which read input from the shell
*
* Return: this function returns the array of read strings on success.
*/

char *ldb_getline(void)
{
	ssize_t _getline_;

	char *buf = NULL;

	size_t bufflen = 0;


	_getline_ = getline(&buf, &bufflen, stdin);

	if (_getline_ == -1)
	{


		if (feof(stdin))
		{
			_putchar('\n');
			free(buf);
			exit(EXIT_SUCCESS);
		}
		else
		{
			free(buf);
			perror("Failed");
			exit(EXIT_FAILURE);
		}
	}


	return (buf);
}
