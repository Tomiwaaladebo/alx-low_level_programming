#include "main.h"
/**
 *_isalpha - checks for alphabets
 *@c: character
 *return: 1 if letter else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}
