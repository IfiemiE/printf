#include "main.h"
/**
  * _strlen - computes number of characters in a string
  * @str: given string
  * Return: computed length
  */
int _strlen(char *str)
{
	int len = 0, i;

	for (i = 0; str[i] != '\0'; i++)
		len++;
	return (len);
}
/**
  * _puts - prints string
  * @str: given string
  */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}
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
