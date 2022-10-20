#include "main.h"

/**
 * printf_char - This function prints a character
 * @arg: Points to character to be printed
 * Return: Returns nothing
 */
int printf_string(va_list arg)
{
	char *string;
	int i = 0;

	string = va_arg(arg, char *);
	if (string == NULL)
		string = "(null)";

	for (; string[i] != '\0'; i++)
		_putchar(string[i]);
	return (i);
}
