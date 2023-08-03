/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int unint;
	int i, binary;

	if (!b)
		return (0);

	unint = 0;

	for (i = 0; b[i] != '\0'; i++)
		;

	for (i--, binary = 1; i >= 0; i--, binary *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		if (b[i] & 1)
		{
			unint += binary;
		}
	}

	return (unint);
}
