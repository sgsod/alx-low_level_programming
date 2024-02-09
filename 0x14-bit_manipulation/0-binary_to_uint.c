/**
  * binary_to_uint - convert binary to usigned int
  * @b: binary (strictly ones and zeros)
  * Return: converted integer ||
  *         0 if invalid input
  */
unsigned int binary_to_uint(const char *b)
{
	int expo, index;
	unsigned int converted_int = 0;

	if (!b)
		return (0);

	for (expo = 0; b[expo]; expo++)
		if (b[expo] != '0' && b[expo] != '1')
			return (0); /* invalid input */
	expo--;

	for (index = 0; b[index]; index++)
	{
		if (b[index] == '1')
			converted_int += (1 << expo);
		expo--;
	}
	return (converted_int);
}
