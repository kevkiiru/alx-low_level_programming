# include <stdio.h>

/**
 * main - Entry point
 * Description: prints hexadecimal numbers of base16
 * Return: Always 0 (success)
*/

int main(void)
{
	int n;
	char ch;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}