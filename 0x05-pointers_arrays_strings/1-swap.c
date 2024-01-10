/**
  * swap_int - get 2 pointers and swap the values pointed to
  * @a: first value
  * @b: second value
  */
void swap_int(int *s, int *b)
{
	int swp;

	swp = *s;
	*s = *b;
	*b = swp;
}
