#include <unistd.h>
/**
 *_putchat - write character
 *
 *Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
