#include "shell.h"
/**
 * main - the start of the code
 * Return: Always 0
*/
int main(void)
{
    char input[MAX_INPUT_SIZE];

    while (1)
    {
        display_prompt();
        if (fgets(input, MAX_INPUT_SIZE, stdin) == NULL)
        {
            printf("\n");
            break;
        }
        if (input[strlen(input) - 1] == '\n')
        {
            input[strlen(input) - 1] = '\0';
        }
        execute_command(input);
    }
    return (0);
}