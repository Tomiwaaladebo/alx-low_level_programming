#include "main.h"
/**
 *_isupper - checks uppercase alphas
 *@c: an integer
 *Return: success
 */
int _isupper(int c);
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
