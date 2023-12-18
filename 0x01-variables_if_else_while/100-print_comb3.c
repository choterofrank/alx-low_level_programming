#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: 0 (Success)
 */
int main(void)
{
	int numb1 = '0';
	int numb2 = '0';

	while (numb1 <= '9')
	{
		while (numb2 <= '9')
		{
			if (numb1 < numb2)
			{
				putchar(numb1);
				putchar(numb2);
				if (numb1 != '8' || (numb1 == '8' && numb2 != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
			numb2++;
		}
		numb1++;
		numb2 = '0';
	}
	putchar('\n');
	return (0);
}

