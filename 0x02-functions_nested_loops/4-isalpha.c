#include "main.h"


/**
 * _islower - Checks for alphabetic character
 * @c: The character to be checked
 * Return: 1 for lowercase character or 0 for any other character
 */

int _isalpha(int c)

{

if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{

return (1);
}
return (0);
}
