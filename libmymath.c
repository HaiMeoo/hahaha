//file: libmymath.c
#include"libmymath.h"

unsigned int giaithua(unsigned int n)
{
	unsigned int result = 1;
	for (unsigned int i = 1; i <= n; i++)
		result = result * i;
	return result;
}

unsigned int tongchan(unsigned int n)
{
	unsigned int result = 0;
	for (unsigned int i = 1; i <= n; i++)
		if (i % 2 == 0)
			result += i;
	return result;
}

unsigned int tongle(unsigned int n)
{
	unsigned int result = 0;
	for (unsigned int i = 1; i <= n; i++)
		if (i % 2 != 0)
			result += i;
	return result;
}

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
	

