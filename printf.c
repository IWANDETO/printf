#include "main.h"
#include <stdarg.h>
/**
 * _printf - This function prints out characters to the standart output
 * print form_func -Multidimensional array
 * @format: last known argument
 * Return: Returns zero
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int i, j;
	int count;
	int total_count = 0;

	print form_func[] = {
		{"c", printf_char},
		{"s", printf_string}
	};
	va_start(arg, format);
	for (i = 0; format[i] != '\0'; i++)
	{
	while (format[i] != '%')
	{
		_putchar(format[i]);
		i++;
	}
	for (j = 0; print[j].symbol != NULL; j++)
	{
		if (format[i + 1] == print[j].symbol[0])
		{
			count = print[j].prints(va_list arg);
			if (count == -1)
				return (-1);
			total_count += count;
			break;
		}
	}
	if (print[j].symbol == NULL && format[i + 1] != ' ')
	{
		return (-1);
	while (format[i] != '%')
	{
		_putchar(format[i]);
		i++;
	}
	}
	}
	va_end(arg);
	return (total_count);
}

