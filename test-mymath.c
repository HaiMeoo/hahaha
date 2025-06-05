 //file: test-mymath.c
#include"libmymath.h"
#include<stdio.h>
int main()
{
	/*unsigned int x, n;
	printf("nhap x: ");
	scanf("%d", &x);
	printf("nhap n: ");
	scanf("%d", &n);*/
	
	printf("giai thua cua 5 = %d\n", giaithua(5));
	printf("tong chan tu 100 den la: %d\n", tongchan(100));
	printf("tong le tu 100 den la: %d\n", tongle(100));
	printf("luy thua 8 mu 4: %d\n", luythua(8, 4));
	return 0;
}
