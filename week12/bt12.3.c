/* •Viết chương trình đảo ngược một mảng
 sử  dụng 2 cách: dùng chỉ số và dùng con trỏ.
 •a[i] chỉ số
 •*(a+i) con trỏ */


#include<stdio.h>
// cach 1 dung chi so a[i] 
/*
void nhapMang(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("nhap phan tu thu %d : ", i+1);
		scanf("%d",&a[i]);

	}
}
void inMang(int a[], int n)
{
	for(int i=n-1; i>=0; i--)
	{
		printf("%d", a[i]);
	}
}
int main()
{
	int n;
	int a[n];
	printf("nhap so phan tu trong mang: \n");
	scanf("%d",& n);
	nhapMang(a,n);
	printf("in nguoc cac phan tu trong mang: \n");
	inMang(a,n);
	return 0;
}
*/
// cach 2 dung con tro *(a+i) 
void nhapMang(int *a, int n)
{
	for(int i=0;i<n;i++)
	{
		printf("nhap phan tu thu %d : ", i+1);
		scanf("%d",(a+i));

	}
}
void inMang(int *a, int n)
{
	for(int i=n-1; i>=0; i--)
	{
		printf("%d", *(a+i));
	}
}
int main()
{
	int n;
	int a[n];
	printf("nhap so phan tu trong mang: \n");
	scanf("%d",& n);
	nhapMang(a,n);
	printf("in nguoc cac phan tu trong mang: \n");
	inMang(a,n);
	return 0;
}