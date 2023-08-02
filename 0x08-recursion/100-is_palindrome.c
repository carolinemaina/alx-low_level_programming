#include "main.h"

/**
 * is_palindrome - determine if string is palindrome
 * @s: string
 * Return: 1 if palindrome
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (calc_pali(s, 0, str_len(s)));
}

/**
 * str_len - check length of string
 * @s: string
 * Return: length
 */
int str_len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + str_len(s + 1));
}

/**
 * calc_pali - check character recursively for palindrome
 * @s: string
 * @i: iterator
 * @l: length of string
 * Return: 1 if palindrome
 */
int calc_pali(char *s, int i, int l)
{
	if (*(s + i) != *(s + l - 1))
		return (0);
	if (i >= l)
		return (1);
	return (calc_pali(s, i + 1, l - 1));
}
