#include "main.h"

/**
 *  * print_str - print a variadic string each per time to stdout
 *   * @args: variadic parameters
 *    *
 *     * Return: numbers of character printed on Successs
 *      * upon failure -1
 */

int print_str(va_list args)
{
int i;

int count = 0;

char *str;

str = va_arg(args, char *);

if (str == NULL)

return (-1);

while (str[i])

{

count = write(1, &str[i], 1);

i = i + 1;

}

return (count);
}
