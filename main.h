#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
typedef struct print
{
	char *symbol;
	int (*prints)(va_list arg);

}print;

int _putchar(char c);
void printf_char(va_list arg);
void printf_int(va_list arg);
void printf_dec(va_list arg);
void printf_string(va_list arg);
int _printf(const char *format, ...);



#endif
