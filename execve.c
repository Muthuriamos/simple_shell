#include "shell.h"
/**
 * main - the main code part
 * Return: Always 0.
*/

/**
 * display_prompt - It displays the prompt
 * 
*/

void display_prompt()
{
    printf("$ ");
    fflush(stdout);
}
/**
 * execute_command - It executes the given command
 * 
*/

void execute_command(char *command)
{
    pid_t pid;

    pid = fork();

    if(pid == 0)
    {
        if (execve(command, (char *[]){command, NULL}, NULL) == -1)
        {
            perror("Error");
        }
        exit(EXIT_FAILURE);
    } else if (pid < 0)
    {
        perror("Error");
    } else {
        witpid(pid, NULL, 0);
    }
}