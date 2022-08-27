/*
•Viết chương trình tính n! sử dụng vòng lặp while, do ... while.
•Bạn có thể sử dụng:
• Biến đếm, i, chạy từ 1 đến n.
• Biến kết quả f */
#include<stdio.h>
int main()
{
	int i=1;
	int n;
	int f=1;
	printf("nhap vao so tu nhien n: ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		f=f*i;
		i++;
	}
	printf("ket qua %d! = %d\n",n,f);
}