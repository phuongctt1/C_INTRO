/*•Viết chương trình có menu như sau:Chương trình với giao diện menu1.
  1.Thực hiện bài tập 8.1. 
  2.Thực hiện bài tập 8.2.  
  3.Thực hiện bài tập 8.3.
  4.Thực hiện bài tập 8.4. 
  5.Thực hiện bài tập 8.5.
  6.Thoát
ựa chọn của bạn (từ 1 tới 6):
 •Chương trình thực hiện tương ứng với lựa chọn từ 1-6.
  Yêu cầu có kiểm tra nếu đầu vào nằm ngoài lựa chọn từ 1-6
  */
#include<stdio.h>
int main()
{
	printf("---------MENU--------\n");
	printf("1.Thuc hien bai tap 8.1\n");
	printf("2.Thuc hien bai tap 8.2\n");
	printf("3.Thuc hien bai tap 8.3\n");
	printf("4.Thuc hien bai tap 8.4\n");
	printf("5.Thuc hien bai tap 8.5\n");
	printf("6.Thoat\n");
	int luachon;
	do
	{

	printf("nhap lua chon cua ban\n");
	scanf("%d", &luachon);
	if(luachon!=1 && luachon !=2 && luachon != 3 && luachon !=4 && luachon !=5 && luachon !=6)
	{
		printf("khong hop le. Moi nhap lai!\n");
	}
	else if (luachon==1)
	{
		printf("1.thuc hien bai tap 8.1\n");
	}
	else if(luachon==2)
	{
		printf("thuc hien bai tap 8.2\n");
	}
	else if(luachon==3)
	{
		printf("thuc hien bai tap 8.3\n");
	}
	else if(luachon==4)
	{
		printf("thuc hien bai tap 8.4\n");
	}
	else if(luachon==5)
	{
		printf("thuc hien bai tap 8.5\n");
	}
	else
	{
		break;
	}
	}while(1);
	return 0;
}