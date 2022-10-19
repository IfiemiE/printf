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
	int k;

	k = _printf("A %s inside a sentence: %c. Did it work?\n", "character", 'F');
	printf("\nk = %d\n", k);
	printf("A %s inside a sentence: %c. Did it work?\n", "character", 'F');

	return (0);
}
