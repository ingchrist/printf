#include "main.h"
/**
 * get_size - Calculates the size to cast the argument
 * @format: Formatted string in which to print the arguments
 * @wz: List of arguments to be printed.
 *
 * Return: Precision.
 */
int get_size(const char *format, int *wz)
{
int curr_i = *wz + 1;
int size = 0;

if (format[curr_i] == 'l')
size = S_LONG;
else if (format[curr_i] == 'h')
size = S_SHORT;

if (size == 0)
*wz = curr_i - 1;
else
*wz = curr_i;
return (size);
}
