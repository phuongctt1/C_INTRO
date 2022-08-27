#include<stdio.h>
int main()
{
	float doC;
	
	printf("nhap do c: \n");
	scanf("%f",&doC);
	printf("chuyen tu do c sang do F: \n");
	printf("%10.4f", (doC + 273));
	return 0;
}