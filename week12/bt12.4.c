/*•Viết một hàm getSale sử dụng con trỏ để lấy tham số là địa chỉ một mảng nguyên.
 Hàm hỏi người dùng nhập vào các thông tin doanh số và lưu nó vào mảng.
 •Viết một hàm totalSale trả về tổng của các thành phần của một mảng nguyên.
 •Sử dụng hai hàm trên trong một chương trình nhập vào doanh số cho từng cửa hàng và hiển thị tổng doanh số.
  Lưu ý sử dụng con trỏ thay vì tham số thường cho các hàm. */
#include<stdio.h>
void getSale(int *a, int *n)
{
	printf("nhap so phan tu cua mang: \n");
	scanf("%d",& (*n));
	for(int i=0;i< *n;i++)
	{
		printf("nhap phan tu thu %d: ", i+1);
		scanf("%d", (a+i));

	}
}
int totalSale(int *a, int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum + (*(a+i));
	}
	return sum;
}
int main()
{
	int *a;
	int n;

	getSale(a,&n);
	printf("in tong: \n");
	printf("%d", totalSale(a,n));
	return 0;

}