//file: luythua.c
unsigned int luythua(unsigned int x, unsigned int n)
{
	unsigned int result = 1;
	if (n == 0)
		return result;
	else
	{
		for (unsigned int i = 1; i <= n; i++)
			result = result * x;
	}
	return result;
}
