# include <unistd.h>

/**
 * _putchar - Entry point
 * @c: main character
 * Description: prints out _putchar
 * Return: Always 0 (success)
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
