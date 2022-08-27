/*1.  Tạo một hàm is_prime
	nhận tham số đầu vào là một số nguyên dương.
 Hàm trả về 1 nếu đó là số nguyên tố, ngược lại trả về 0.
 Nguyên mẫu: int is_prime(int n);
 2.  Viết chương trình nhập vào một số nguyên dương và in ra tất cả
  các số nguyên tố nhỏ hơn hoặc bằng số đó.
  Sử dụng hàm is_prime */
#include<stdio.h>
#include<stdlib.h>

int is_prime(int k)
{
	int a =0;
	for(int i=1;i<=k;i++)
	{
		if(k%i==0)
			a++;
	}
	if(a == 2)
		return 1;
	return 0;
}

void lietke(int n)
{
	for(int i=2;i<n;i++)
	{
		if(is_prime(i) == 1)
			printf("%d\n",i);
	}
}

int main()
{
	int n;
	
	
	printf("nhap vao 1 so tu nhien \n");
	scanf("%d",&n);
	lietke(n);	
	
	
	return 0;
}