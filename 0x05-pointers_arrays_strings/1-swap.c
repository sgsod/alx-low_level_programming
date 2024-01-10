/**
  * swap_int - get 2 pointers and swap the values pointed to
  * @a: first value
  * @b: second value
  */
void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
