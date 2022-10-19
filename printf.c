#include "main.h"
/**
  * count_print - count printable characters
  * @f: string pointer
  * @i: location of the first character in the format substring
  * @j: location of the last character in format substring
  * @p: pointer to location in a variable list
  * Return: number of printable characters
  */
int count_print(char *f, int i, int j, va_list *p)
{
	int (*Funct)(const char *, const char *, va_list *);
	char *start, *stop;
	int count;

	if (f[0] != '%')
	{
		_puts("Error\n");
		return (0);
	}
	Funct = get_op(f[j]);
	start = f + i;
	stop = f + j;
	count = Funct(start, stop, p);
	return (count);
}

/**
  * _printf - a partial reproduction of a member of
  * printf function family of functions
  * @format: first argument string
  * Return: the number of characters to be printed
  */
int _printf(const char *format, ...)
{
	int i, j, count = 0;
	va_list ptr, *vptr;
	char *CONVERSION = "aAcdsiouxXfFgGmp";

	va_start(ptr, format);
	vptr = &ptr;
	while ((format != NULL) && (format[i] != '\0'))
	{
		if (format[i] != '%')
		{
			count++;
			_putchar(format[i]);
		}
		else if (format[i + 1] == '%')
		{
			i++;
			_putchar(format[i]);
			count++;
		}
		else
		{
			j = i;
			while (ismember(format[j], CONVERSION) == 0)
				j++;
			count = count + count_print((char *)format, i, j, vptr);
			i = j;
		}
		i++;
	}
	va_end(ptr);
	va_end(*vptr);
	return (count);
}
