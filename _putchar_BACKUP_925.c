#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c
<<<<<<< HEAD

{  
=======
{
>>>>>>> 5046a76ebc843a2d5443437695c88868faa8bd1b
    return (write(1, &c, 1));
}
