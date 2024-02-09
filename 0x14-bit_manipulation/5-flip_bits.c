/**
  * flip_bits - compute the number of bits to flip to get to differnt number
  * @n: first number
  * @m: second number
  * Return: number of bits to flip
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	n = n ^ m;
	m = 0;
	while (n > 0)
	{
		if ((n & 0x01) == 1)
			count++;
		n = n >> 1;
	}
	return (count);
}
