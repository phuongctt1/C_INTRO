/* • Một hàm để tính tổng lũy thừa 3 của các số nguyên từ 1 đến n (đầu vào n, đầu ra)
• Một hàm liệt kê tất cả các ước số của số nguyên n 
• Một hàm liệt kê bình phương của tất cả các số từ 1 đến n
• Viết chương trình sử dụng cả 3 hàm trên.
 Chương trình yêu cầu người dùng nhập vào một số và gọi 
 3 hàm trên để in ra giá trị tương ứng. */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int tinhtong(int n)
{
	int sum = 0;
	for(int i=1;i<=n;i++)
	{
		sum = sum + i*i*i;
	}
	return sum;
}
void lietkeuoc(int n)
{
	printf("lieu ke uoc: ");
	for(int i=1;i<=n;i++)
	{
		if((n%i) == 0)// chia lay phan du
			printf("%d ",i);
	}

}
void binhphuong(int n)
{
	printf("liet ke binh phuong\n");
	printf("    i     i*i\n");
	for(int i=1;i<=n;i++)
		printf("%5d %5d\n",i ,i*i);
}
int main()
{
	int n;
	printf("nhap so tu nhien n: ");
	scanf("%d",&n);
	printf("tong luy thua 3 so nguyen la: %d\n", tinhtong(n));
	lietkeuoc(n);
	printf("\n");
	binhphuong(n);
	return 0;

}