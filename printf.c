#include "main.h"
#include <stdarg.h>
/**
 * _printf - This function prints out characters to the standart output
 * print form_func -Multidimensional array
 *
 * Return; Returns number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int i, j;
	print form_func[] =
	{
		{"c", printf_char},
		{"s", printf_string}
	};

	va_start(arg, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(form_func[j].symbol)))
			j++;

		if (j < 4)
		{
			form_func[j].prints(arg);
		}

		i++;
	}
	va_end(arg);
	return (0);
}
