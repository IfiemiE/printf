#ifndef MAIN_H
#define MAIN_H

#define CONV_SPEC "diouxXfFgGaAcsmp%"
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
/**
  * struct f_operator - a structure for specifier
  * and operator functiom pointer
  * @str: charater string indicating format specifier
  * @form_operator: an associated operator customised
  * to handle str
  */
typedef struct f_operator
{
	char conv;
	int (*format_op)(const char *, const char *, va_list *);
} f_operator;

void _putchar(char);
void _puts(char *);
int _strlen(char *);
int _printf(const char *format, ...);
int ismember(const char, const char *);
int (*get_op(char))(const char *, const char *, va_list *);
int format_s(const char *, const char *, va_list *);
int format_c(const char *, const char *, va_list *);





#endif
