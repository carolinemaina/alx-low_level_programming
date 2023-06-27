#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - enerates random valid passwords for
 * the program 101-crackme
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int password[100];
	int num1, sum, num2;

	num1 = 0;

	srand(time(NULL));

	for (num1 = 0; num1 < 100; num1++)
	{
		password[num1] = rand() % 78;
		sum += (password[num1] + '0');
		putchar(password[num1] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			num2 = 2772 - sum - '0';
			sum += num2;
			putchar(num2 + '0');
			break;
		}
	}
	return (0);
}
