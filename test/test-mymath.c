//file: test-mymath.c
#include"libmymath.h"
#include<stdio.h>
int main()
{
	unsigned int x, n;
	printf("nhap x: ");
	scanf("%d", &x);
	printf("nhap n: ");
	scanf("%d", &n);
	
	printf("giai thua cua %d! = %d\n", n, giaithua(n));
	printf("tong chan tu 1 den %d la: %d\n", n, tongchan(n));
	printf("tong le tu 1 den %d la: %d\n", n, tongle(n));
	printf("luy thua %d mu %d: %d\n", x, n, luythua(x, n));
	return 0;
}
