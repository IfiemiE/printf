#include "main.h"

/**
  * format_s - prints a string and computes number of
  * printed character
  * @start: pointer to first character
  * @stop: pointer to last character
  * @ptr: pointer to a recieved variable list
  * Return: number of printed character
  */
int format_s(const char *start, const char *stop, va_list *ptr)
{
	int count, i;
	char *s = va_arg(*ptr, char *);

	for (i = 0; (start + i) != stop; i++)
		break;
	if (s == NULL)
		s = "(null)";
	_puts(s);
	count = _strlen(s);
	return (count);
}

/**
  * format_c - prints a character and computed number
  * of printed characters
  * @start: the pointer to first character(%) of the
  * format specifier
  * @stop: the pointer to the last character (conversion)
  * of the format specifier
  * @ptr: pointer to a value in a variable list
  * Return: the number of printed character
  */
int format_c(const char *start, const char *stop, va_list *ptr)
{
	int count = 0, i;
	char c = (char)va_arg(*ptr, int);

	for (i = 0; (start + i) != stop; i++)
		break;
	_putchar(c);
	count++;
	return (count);
}
/**
  * format_i - prints digits of a number and computes number of
  * printed character
  * @start: pointer to first character in format
  * @stop: pointer to last character in format
  * @ptr: pointer to a recieved variable list
  * Return: number of printed character
  */
int format_i(const char *start, const char *stop, va_list *ptr)
{
	int n = va_arg(*ptr, int);
	int i, N, r, k, count = 0, p = 1;

	for (i = 0; (start + i) != stop; i++)
		break;

	if (n > 0)
		k = 1;
	else
		k = -1;
	N = n;
	while ((N > 9) || (N < -9))
	{
		N = N / 10;
		p = p * 10;
	}
	if (n < 0)
	{
		_putchar('-');
		count++;
	}
	N = n;
	do {
		r = k * (N / p);
		r = r % 10;
		_putchar('0' + r);
		count++;
		p = p / 10;
	} while (p > 0);

	return (count);
}
