#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>

#include <stdarg.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

extern char **environ;

/*extern char path_name[];*/

#define MAX_INPUT_SIZE 1024
#define MAX_ARGS 1024

int shell_setenv(const char *name, const char *value);
void call_and_execute(char *args[], char *valget);
int shell_unsetenv(const char *name);
int shell_cd(const char *directory);
void execute_builtin_command(char **command, char *valget);
char *ldb_getline(void);
char *ldb_strtok(char *str, const char *delim);
char *ldb_non_interactive_getline(void);
char *ldb_getenv(char *env_name);
void cmd_seperator(char *get_line_val, char *currt_wrk_dir, char *user_prompt);
void change_dir(char *cmd_args[], char *currt_wrk_dir);
int _putchar(char c);
size_t _strlen(const char *str);
int _printf(const char *format, ...);
void print_integer(int val);
int err_putchar(char c);
int _integer_length(int integer);
int _fprintf(FILE *stream, const char *format, ...);
int ldb_strncmp(char *str1, char *str2, int num);

#endif
