#include <stdio.h>
/**
 * main - Entry point
 * description:prints all single digit numbers of base 10
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		printf("%d", number);
	}
	printf("\n");
	return (0);
}
