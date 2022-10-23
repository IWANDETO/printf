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
	print form_func[] = {
		{"c", printf_char},
		{"s", printf_string}
	};

	va_start(arg, format);
	
	for (i = 0; format[i] != '\0'; i++)
	{
			while( format[i] != '%' )
				{
					_putchar(format[i]);
						i++;
				}
		
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
	}
	va_end(arg);
	return (0);
}

