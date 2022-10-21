#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
/**
 * struct print - structure for printing characters to stdio
 * @symbol: pointer to a character in struct print
 * @prints: pointer to integer in struct print
 */
typedef struct print
{
	char *symbol;
	int (*prints)(va_list arg);

}
print;
int _putchar(char c);
int  printf_char(va_list arg);
int printf_string(va_list arg);
int _printf(const char *format, ...);



#endif
