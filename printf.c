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
	for (j = 0; form_func[j].symbol != NULL; j++)
	{
		if (format[i + 1] == form_func[j].symbol[0])
		{
			count = print[j].form_func(arg);
			if (count == -1)
				return (-1);
			total_count += count;
			break;
		}
	}
	if (form_func[j].symbol == NULL && format[i + 1] != ' ')
	{
		if (format[i + 1] != '\0')
		{
			_putchar(format[i];
			_putchar(format[i + 1];
			total_count = total_count + 2;
		}
		else
			return (-1);
	}
		i = i + 1;
	}
	va_end(arg);
	return (total_count);
}

