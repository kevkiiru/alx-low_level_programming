# include<stdio.h>

/**
 * main - prints the alphabets in lowercase
 * Description: outputs in lowercase
 * Return: Always 0 (success)
*/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
