#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("Enter n: \n");
	int giaithua=1;
	int a;
	scanf("%d",&a);
	for(int i=a;i>=1;i--)
	{
		giaithua=giaithua*i;
	}
	printf("a! = %d",giaithua);
	return 0;
}