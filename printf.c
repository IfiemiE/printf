#include "main.h"

/**
  * _printf - a partial reproduction of a member of
  * printf function family of functions
  * @format: first argument string
  * Return: the number of characters to be printed
  */
int _printf(const char *format, ...)
{
	int i, j, count = 0;
	int (*Funct)(const char *, const char *, va_list *);
	va_list ptr, vptr;
	char *start, *stop;
	char Conversion[] = "cds", Escape[] = "%";

	va_start(ptr, format);
	while ((format != NULL) && (format[i] != '\0'))
	{
		if ((format[i] != '%') && (format[i] != '\\'))
		{
			count++;
			_putchar(format[i]);
		}
		else if (ismember(format[i + 1], Escape))
		{
			i++;
			_putchar(format[i]);
			count++;
		}
		else
		{
			j = i;
			while (ismember(format[j], Conversion) == 0)
				j++;
			Funct = get_op(format[j]);
			va_copy(vptr, ptr);
			start = (char *)(format + i);
			stop = (char *)(format + j);
			count = count + Funct(start, stop, &ptr);
			i = j;
		}
		i++;
	}
	va_copy(ptr, vptr);
	va_end(ptr);
	va_end(vptr);
	return (count);
}
