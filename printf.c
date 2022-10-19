#include "main.h"

/**
  * _printf - a partial reproduction of a member of
  * printf function family of functions
  * @format: first argument string
  * Return: the number of characters to be printed
  */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list ptr;
	char ch, *s;

	va_start(ptr, format);
	while ((format != NULL) && (format[i] != '\0'))
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					ch = (char)va_arg(ptr, int);
					count++;
					_putchar(ch);
					break;
				case 's':
					s = va_arg(ptr, char *);
					count += _strlen(s);
					_puts(s);
					break;
				case '%':
					count++;
					_putchar('%');
					break;
				default:
					_putchar(format[i]);
					break;
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(ptr);
	return (count);
}
