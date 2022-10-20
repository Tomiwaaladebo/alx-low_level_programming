#include "main.h"
/**
 *_islower - check for lowercase
 *@c: character
 *Return: 1 if lowercase and o if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
