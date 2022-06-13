# include<stdio.h>
# include "main.h"
# include<time.h>

/**
 * main - main program
 *
 * Return: 0 always
 */

int main(void)
{
	int pass[100];
	int a, b, sum;

	sum = 0;

	srand(time(NULL));

	for (a = 0; a < 100; a++)
	{
		pass[a] = rand() % 78;
		sum += (pass[a] + '0');
		_putchar(pass[a] + '0');

		if ((2772 - sum) - '0' < 78)
		{
			b = 2772 - sum - '0';
			sum += b;
			_putchar(b + '0');
			break;
		}
	}
	return (0);
}
