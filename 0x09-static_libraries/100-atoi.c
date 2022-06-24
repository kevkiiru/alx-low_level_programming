# include<stdio.h>
# include "main.h"

/**
 * _atoi - main entry point
 * @s: main integer
 *
 * Return: 0 always
 */

int _atoi(char *s)
{
	int a, b, c, d, leng, digit;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	leng = 0;
	digit = 0;

	while (s[leng] != '\0')
		leng++;

	while (a < leng && d == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			c = c * 10 + digit;
			d = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}

	if (d == 0)
		return (0);

	return (c);
}
