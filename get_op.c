#include "main.h"

/**
  * get_op - select and return relevant function pointer
  * @ch: a character as selection criteria
  * Return: function pointer
  */
int (*get_op(char ch))(const char *, const char *, va_list *)
{
	f_operator f_op[] = {
		{'c', format_c},
		{'s', format_s},
		{'d', format_i},
		{'i', format_i},
		{'\0', NULL}
	};
	int i = 0;

	while (f_op[i].conv != '\0')
	{
		if (ch == f_op[i].conv)
		{
			return (f_op[i].format_op);
		}
		i++;
	}
	return (f_op[i].format_op);
}
