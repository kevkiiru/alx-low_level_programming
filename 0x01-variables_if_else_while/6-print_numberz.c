# include<stdio.h>

/**
 * main - Entry point
 * Description: prints all single digit numberz of base 10
 * Return: Always 0 (success)
*/

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
