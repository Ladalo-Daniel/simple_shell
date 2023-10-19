#include "shell.h"
void execute_builtin_command(char **cmd_args, char *get_line_val);

/**
 * execute_builtin_command - A function that handles builtin commands
 *
 * @cmd_args: this is the command arguments to be checked.
 * @get_line_val: getline value argument to  free.
 * Return: Always 0
 */

void execute_builtin_command(char **cmd_args, char *get_line_val)
{
	char executable_file[MAX_INPUT_SIZE];

	char *file_path = "/bin/";

	if (strcmp(cmd_args[0], "exit") == 0)
	{
		if (cmd_args[1] != NULL)
		{
			char *endptr;

			long status = strtol(cmd_args[1], &endptr, 10);

			if (strcmp(cmd_args[1], "-98") == 0)
			{
				char *a = cmd_args[0];

				char *b = cmd_args[1];

				int n = 1;

				char *ms = "./hsh: %d: %s: Illegal number: %s\n";

				_fprintf(stderr, ms, n, a, b);
				free(get_line_val);
				free(cmd_args);
				exit(2);
			}

			if (*endptr == '\0')
			{
				free(get_line_val);
				free(cmd_args);
				exit(status);
			}
			else
			{
				char *a = cmd_args[0];

				char *b = cmd_args[1];

				int n = 1;

				char *ms = "./hsh: %d: %s: invalid input: %s\n";

				_fprintf(stderr, ms, n, a, b);
				free(get_line_val);
				free(cmd_args);
				exit(2);
			}
		}
		else
		{
			free(get_line_val);
			free(cmd_args);
			exit(0);
		}
	}
	else if (strcmp(cmd_args[0], "env") == 0)
	{
		char **env;

		for (env = environ; *env != NULL; env++)
		{
			_printf("%s\n", *env);
		}
	}
	else if (strcmp(cmd_args[0], "setenv") == 0)
	{
		/*implement*/
	}
	else if (strcmp(cmd_args[0], "unsetenv") == 0)
	{
		/*implement*/
	}
	else if (strcmp(cmd_args[0], "cd") == 0)
	{
		/*implement*/
	}
	else if (strcmp(cmd_args[0], "#") == 0)
	{
		/*NIL*/
	}
	else
	{
		if (strchr(cmd_args[0], '/') != NULL)
		{
			if (access(cmd_args[0], X_OK) != -1)
			{
				call_and_execute(cmd_args, get_line_val);
			}
			else
			{
				int n = 1;

				char *ms = "./hsh: %d: %s: unavailable\n";

				_fprintf(stderr, ms, n, cmd_args[0]);
				free(get_line_val);
				free(cmd_args);
				exit(127);
			}
		}
		else
		{
			strcpy(executable_file, file_path);
			strcat(executable_file, cmd_args[0]);

			if (access(executable_file, X_OK) != -1)
			{
				call_and_execute(cmd_args, get_line_val);
			}
			else
			{
				char *ms = "./hsh: %d: %s: unavailable\n";

				_fprintf(stderr, ms, 1, cmd_args[0]);
				free(get_line_val);
				free(cmd_args);
				exit(127);
			}
		}
	}
}
