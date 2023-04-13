#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of @s2 to add to @s1 to be a new string
 *
 * Return: new string followed by the first @n bytes
 * of string 2 @s2 or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int l1, l2, a, b;

	/*treat NULL as empty string*/
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	l1 = l2 = 0;
	/*length of both s1 & s2 respectively*/
	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;
	/*set n to length of s2*/
	if (n >= l2)
		n = l2;

	ptr = (char *) malloc((l1 + n + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	/*add s1 to ptr*/
	for (a = 0; s1[a] != '\0'; a++)
		ptr[a] = s1[a];

	/*add s2 n bytes to ptr*/
	for (b = 0; b < n && s2[b] != '\0'; b++)
	{
		ptr[a] = s2[b];
		a++;
	}
	ptr[a] = '\0';
	return (ptr);
}
