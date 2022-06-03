# include<stdio.h>

/**
 * main - Entry point
 * Description: outputs lowercase alphabets except q and e
 * Return: Always 0 (success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
