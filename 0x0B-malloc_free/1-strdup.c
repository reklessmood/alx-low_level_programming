#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Creates a duplicate of a string.
 * @str: The string to be duplicated.
 *
 * Return: Pointer to the duplicated string, or NULL if it fails.
 */
char *_strdup(char *str)
{
	size_t len;
	char *dup;

	if (str == NULL)
		return (NULL);

	len = strlen(str) + 1;
	dup = malloc(len * sizeof(char));

	if (dup == NULL)
		return (NULL); /* Failed to allocate memory */

	strcpy(dup, str);

	return (dup);
}
