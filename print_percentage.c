#include "main.h"

/**
 *  * print_cent - print character % to stdout
 *   * @args: variadic parameters
 *    *
 *     * Return: number of character printed
 */

int print_cent(va_list args)
{
(void)args;

write(1, "%", 1);

return (1);
}
