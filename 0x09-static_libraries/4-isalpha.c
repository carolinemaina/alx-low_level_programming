#include "main.h"
/**
 * _isalpha - checks for alphabet order
 * @c: The character for checking
 * Return:Returns 1 alphabetical character or 0 otherwise
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
