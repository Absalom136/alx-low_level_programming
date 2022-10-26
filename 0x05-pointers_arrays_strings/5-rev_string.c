#include "main.h"

/**
* rev_string - reverses a string
* @s: the input
* Return: string in reverse
*/

void rev_string(char *s)
{
char *str = s;
char temp;

for (; (*(s = 1); )
{
s++
}
while (str < s)
{
temp = *str;
*str = *s;
*s = temp;
s--;
str++;
}
}
