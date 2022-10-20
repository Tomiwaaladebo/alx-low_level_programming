#include <unistd.h>
/**
 *_putchar - write character c
 *@c: the character to be printed
 *Return: 1 on success else -1
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
