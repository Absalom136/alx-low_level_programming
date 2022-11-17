#include "main.h"

/**
* _strcat - concatenates two strings
*@dest: dest string
* @src: src string
* Return: pointer to resulting string
*/

char *_strcat(char *dest, char *src)
{
	int j = 0, i = 0;

	while (dest[j] != 0)
	{
		j++;
	}
	while (src[i] != 0)
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = 0;
	return (dest);
}
