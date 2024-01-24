/**
  * print_name - print a name
  * @name: name given as string
  * @f: prefix
  */
void print_name(char *name, void (*f)(char *))
{
	if (name)
		f(name);
}
