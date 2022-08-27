/*•Viết một hàm tính toán lương tuần của công nhân với đầu vào là số giờ làm trong tuần.
 Lương một giờ là 50.000 VND trong 40 giờ đầu tiên trong 1 tuần.
 Nếu công nhân phải làm vượt giờ, tiền sẽ được trả gấp rưỡi (1.5 lần)
 so với lương bình thường.
 •Viết chương trình yêu cầu nhập số giờ làm việc và hiển thị lương người công nhân đó.
 •Kiểm tra dữ liệu: số giờ một người công nhân làm không ít hơn 10 và không quá 65 giờ. */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int tinh_luong(int n)//n la so gio lam viec
{
	int luong=0;
	if (n<=40)
		luong = n * 50000;
	else
		luong=(n-40)*50000*1.5 + 40*50000;
	return luong; 
}
int main()
{
	int n;
	do
	{
		printf("nhap so gio lam viec trong tuan: \n");
		printf("lon hon 10 va nho hon 65\n");
		scanf("%d", &n);
		//printf("hien thi tien luong : %d\n", tinh_luong(n));



	}while(n<=10 || n>=65);
	printf("hien thi tien luong : %d VND\n", tinh_luong(n));
	return 0;
}
