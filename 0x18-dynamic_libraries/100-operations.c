#include <stdio.h>

/**
 * add - sum
 * @a: input
 * @b: input
 * return: sum
 */
int add(int a, int b) 
{
	return a + b;
}

/**
 * add - difference
 * @a: input
 * @b: input
 * return: difference
 */
int sub(int a, int b)
{
	return a - b;
}

/**
 * add - multiplication
 * @a: input
 * @b: input
 * return: multiplication
 */
int mul(int a, int b)
{
	return a * b;
}

/**
 * add - division
 * @a: input
 * @b: input
 * return: division
 */
int div(int a, int b)
{
	if (b != 0)
	{
		return a / b;
	}
	else
	{
		printf("Error: Division by zero\n");
		return 0;
	}
}

/**
 * add - modulus
 * @a: input
 * @b: input
 * return: modulus
 */
int mod(int a, int b)
{
	if (b != 0) 
	{
		return a % b;
	}
	else
	{
		printf("Error: Modulo by zero\n");
		return 0;
	}
}
