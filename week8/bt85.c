/*•Viết chương trình tính điểm trung bình của một danh sách các điểm đầu vào.
•Đầu vào: danh sách các điểm đầu vào, việc nhập sẽ dừng khi điểm nhập vào nhỏ hơn 0.
•Đầu ra: trung bình của các điểm đã nhập
•Yêu cầu: sử dụng cấu trúc while */
#include<stdio.h>
int main()
{
	int diem;
	int count=0;
	float tong=0;
	while(diem>=0)
	{	printf("nhap diem : ");
		scanf("%d",&diem);
		tong= tong + diem;
		count++;
	}
	printf("count = %d\n",count);
	printf("trung binh diem da nhap la: %f",tong/count );
}