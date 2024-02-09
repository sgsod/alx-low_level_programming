/**
  * get_bit - get bit at given index
  * @n: value given
  * @index: index to search for bit
  * Return: bit at given index || -1 err0r
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int comp;

	comp = 1 << index;
	if (comp > n)
		return (-1);

	return ((n & comp) == comp ? 1 : 0);
}
