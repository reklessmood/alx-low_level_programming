/**
 * wildcmp - Compares two strings and checks
 * if they can be considered identical.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: 1 if the strings are identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
	{
		if (*s1 == '\0')
			return (1);
		else
			return (0);
	}

	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)))
			return (1);
		else
			return (0);
	}

	if (*s1 != '\0' && (*s1 == *s2 || *s2 == '?'))
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
