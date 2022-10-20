#include "main.h"
/**
 * printf_char - This function prints a character
 * @arg: Points to character to be printed
 * Return: Returns nothing
 */

void printf_char(va_list arg)
{
	_putchar(va_arg(arg, int));
}

