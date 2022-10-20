#include "main.h"
/**
 *_abs - calculates the absolute value of a number
 *@t: the integer
 *Return: the absolute value of the integer
 */
int _abs(int t)
{
	if (t < 0)
		t = -t;
	return (t);
}
