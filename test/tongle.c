//file: tongle.c
unsigned int tongle(unsigned int n)
{
	unsigned int result = 0;
	for (unsigned int i = 1; i <= n; i++)
		if (i % 2 != 0)
			result += i;
	return result;
}
