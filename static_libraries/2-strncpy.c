/**
 * _strncpy - returns the length of a string
 * @dest: pointer to char copy
 * @src: pointer to char
 * @n: characters from the string pointed to
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;
	int cont, length;

	cont = 0;

	for (length = 0 ; dest[length] != '\0' ; length++)
	{
	}

	while (cont < n)
	{
		if (*src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
		}
		else if (*src == '\0')
		{
			*dest = '\0';
			dest++;
		}
		cont++;
	}
	dest = p;
	return (dest);
}
