#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
  * main - tests codes
  *
  * Return: 0 always
  */
int main(void)
{
	char c = 'A';
	char *str = "child";
	int k = _printf("%c %%%%%%%    % \\man %s\n", c, str);

	printf("k = %d\n", k);
	printf("%c %%%%%%%   % \\man %s\n", c, str);


	return (0);
}
