//file: giaithua.c
unsigned int giaithua(unsigned int n)
{
	unsigned int result = 1;
	for (unsigned int i = 1; i <= n; i++)
		result = result * i;
	return result;
}
