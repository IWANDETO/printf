#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
typedef struct print
{
	char *symbol;
	int (*prints)(va_list args);

}print;

int _putchar(char c);
int printf_char(va_list args);
int printf_int(va_list args);
int printf_dec(va_list args);
int printf_string(va_list args);
int _printf(const char *format, ...);



#endif
