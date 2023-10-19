# C - Simple Shell Project
Alx Simple Shell collaborative project done using C- Programming Language
# Collaborators
* LADALO DANIEL
* ADEYEMI MARVELLOUS

# Project General Requirements
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc,
	using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.
	and betty-doc.pl
* Your shell should not have any memory leaks
* No more than 5 functions per file
* All your header files should be include guarded
* Use system calls only when you need to (why?)
* Write a README with the description of your project
* You should have an AUTHORS file at the root of your repository,listing all
	individuals having contributed content to the repository.
	Format, see Docker

# Tasks
1. ***A UNIX command line interpreter***

**This Command line interpreter does the following:**
* Display a prompt and wait for the user to type a command and always ends with a new line.
* The prompt is displayed again each time a command has been executed.
* The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.
* The command lines are made only of one word. No arguments will be passed to programs.
* If an executable cannot be found, an error message is printed and the prompt is displayed again.
* Handle errors.
* Handle the “end of file” condition (Ctrl+D)

2. ***Simple shell 0.1***
* This handle command lines with arguments

3. ***Simple shell 0.2 +***
* this handle the PATH

4. ***Simple shell 0.3 +***
* This implement the exit built-in, that exits the shell
5. ***Simple shell 0.4 +***
* This implement the env built-in, that prints the current environment
