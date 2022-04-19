#ifndef PRINTF
#define PRINTF
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "main.h"
#include <stdarg.h>
/**
 * hexa - struct
 * @i: integer
 * @c: characters
 */
typedef struct rot13
{
	char c;
} rt;
/**
 * prf -prf
 * @c: characters
 * @f: pointer to function
 */
typedef struct prf
{
	char c;
	int (*f)(va_list p);

} pr;
int _printf(const char *format, ...);
int print_int(va_list i);
int print_string(va_list s);
int print_char(va_list c);
int _putchar(char c);
int print_percent(va_list c);

// new files added

int printf_pointer(va_list val);
int printf_hex_aux(unsigned long int num);
int printf_HEX_aux(unsigned int num);
int printf_exclusive_string(va_list val);
int printf_HEX(va_list val);
int printf_hex(va_list val);
int printf_oct(va_list val);
int printf_unsigned(va_list args);
int printf_bin(va_list val);
int printf_srev(va_list args);
int printf_rot13(va_list args);
int printf_int(va_list args);
int printf_dec(va_list args);
int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int rev_string(char *s);
int _strlenc(const char *s);
int printf_37(void);
int printf_char(va_list val);
int printf_string(va_list val);

#endif
