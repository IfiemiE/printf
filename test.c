#include "main.h"
#include <stdio.h>
#include <stdarg.h>

void print(int, ...);
int main(void)
{
	char c = 'A';
	char *str = "child";
	int k = _printf("%c man %s\n", c, str);

	printf("k = %d\n", k);

	return (0);
}
