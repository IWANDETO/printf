#include "main.h"

/**
 * printf_char - This function prints a character
 * @arg: Points to character to be printed
 * Return: Returns nothing
 */

void printf_string(va_list arg)
{
	char *string;

	string = va_arg(arg, char *);
	printf("%s", string);
}
