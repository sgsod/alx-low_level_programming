/**
  * clear_bit - set value of bit at given index to zero
  * @n: pointer to value
  * @index: specified index
  * Return: 1 (success) || -1 (error)
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int comp;

	if (!n)
		return (-1);
	comp = 1 << index;
	*n = *n ^ comp;
	return (1);
}
