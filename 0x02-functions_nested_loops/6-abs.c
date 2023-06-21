#include "main.h"
/**
 * _abs -  computes the absolute value of an integer
 * @a: The number for computing
 * Return:Returns absolute value or 0 otherwise
 */

int _abs(int a)
{
if (a < 0)
{
int abs_value;

abs_value = a * -1;
return (abs_value);
}
return (a);
}
