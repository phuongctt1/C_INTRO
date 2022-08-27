/*a)  Tạo một cấu trúc tên là date để lưu trữ ngày tháng năm.
b)  Viết một hàm để nhập các trường cho kiểu cấu trúc này.
Nhớ kiểm tra dữ liệu nhập (ngày tháng phải hợp lệ).
c)  
Viết một hàm tên là datecmp để so sánh hai ngày, sẽ trả về
-1   nếu ngày đầu tiên trước ngày thứ hai
0   nếu hai ngày bằng nhau.
1   nếu ngày đầu tiên sau ngày thứ haid)    
Viết chương trình hỏi người dùng hai ngày và in ra kết quả so sánh. */
#include<stdio.h>
#include<stdlib.h>
typedef struct date
{
	int ngay;
	int thang;
	int nam;
}date;

int main()
{
	date _date[2];
	for(int i=0;i<2;i++)
	{
		printf("lan %d\n",i+1);
		do{
			printf("nhap ngay \n");
			scanf("%d", &_date[i].ngay);
		if(_date[i].ngay<1 || _date[i].ngay>31)
			printf("ngay ko hop le, moi nhap lai \n");
		}while(_date[i].ngay<1 || _date[i].ngay>31);
		do{
			printf("nhap thang: \n");
			scanf("%d", &_date[i].thang);
		if(_date[i].thang<1 || _date[i].thang>12)
			printf("thang khong hop le, moi nhap lai \n");
		}while(_date[i].thang<1||_date[i].thang>12);
	
		do{
			printf("nhap nam: \n");
			scanf("%d", &_date[i].nam); 
		if(_date[i].nam<0)
			printf("khong hop le, moi nhap lai \n");
		}while(_date[i].nam<0);
	
		printf(" %d/%d/%d \n",_date[i].ngay, _date[i].thang, _date[i].nam);
	}
	// so sanh 2 ngay
	if (_date[0].ngay ==_date[1].ngay && _date[0].thang==_date[1].thang && _date[0].nam==_date[1].nam )
		printf("2 ngay bang nhau\n");
	else if (_date[0].ngay < _date[1].ngay&& _date[0].thang==_date[1].thang && _date[0].nam==_date[1].nam)
		printf("ngay dau tien truoc ngay thu 2\n");
	else if (_date[0].ngay > _date[1].ngay&& _date[0].thang==_date[1].thang && _date[0].nam==_date[1].nam)
		printf("ngay dau tien sau ngay thu 2\n");
	else if ( _date[0].thang<_date[1].thang && _date[0].nam==_date[1].nam)
		printf("ngay dau tien truoc ngay thu 2\n");
	else if ( _date[0].thang>_date[1].thang && _date[0].nam==_date[1].nam)
		printf("ngay dau tien sau ngay thu 2\n");
	else if ( _date[0].nam<_date[1].nam)
		printf("ngay dau tien truoc ngay thu 2\n");

	else 
		printf("ngay dau tien sau ngay thu 2\n");
	return 0;
}