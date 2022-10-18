#include "main.h"
/**
  * ismember - checks if a character is present
  * in a string
  * @c: given string
  * @str: given character
  * Return: 1, if c is found in str; 0, if not.
  */
int ismember(const char c, const char *str)
{
	int r = 0;
	int i;

	if (str == NULL)
		return (0);
	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (c == *(str + i))
		{
			r = 1;
			break;
		}
	}
	return (r);
}
