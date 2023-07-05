#include "main.h"

int _strlen_recursion(char *s);
int _pali(char *s, int i, int length);

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: input
 * Return: if palindrome or not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (_pali(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - return length of string
 * @s: string input
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * _pali - check recursively for palindrome
 * @s: string to check
 * @i: iterate
 * @length: length of string
 * Return: if palindrome
 */
int _pali(char *s, int i, int length)
{
	if (*(s + i) != *(s + length - 1))
		return (0);
	if (i >= length)
		return (1);
	return (_pali(s, i + 1, length - 1));
}
