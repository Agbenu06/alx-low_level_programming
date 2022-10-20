#include "main.h"

/* Return: Always 0 (success) */
int main(void)
{
	char *sh = "main";

	while (*sh)
	{
		_putchar(*sh);
		sh++;

	}
	_putchar('/n');
	
	return (0);
}

