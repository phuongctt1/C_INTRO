/*• Viết chương trình sử dụng cấu trúc lưu trữ thông tin thời
tiết cho từng tháng :
• Total Rainfall (Tổng lượng mưa)
• High Temperature (Nhiệt độ cao nhất)
• Low Temperature (Nhiệt độ thấp nhất)
• Average Temperature (Nhiệt độ trung bình)
• Chương trình nên có một mảng 12 phẩn tử để lưu dữ liệu
thời tiết cho cả năm. Khi chương trình chạy, yêu cầu
người dùng nhập dữ liệu cho từng tháng, tính toán và
hiển thị lượng mưa trung bình, tổng lượng mưa cả năm,
nhiệt độ thấp nhất và cao nhất cho cả năm.
• Kiểm tra đầu vào:
• Chỉ chấp nhận nhiệt độ trong khoảng -40 đến 50 độ C
• Lượng mưa không âm và không quá 1000 (mm) */
#include<stdio.h>
#include<stdlib.h>
typedef struct thoitiet
{
	float totalR; // tong luong mua
	float highT; // nhiet do cao nhat
	float lowT; // nhiet do thap nhat
	float averageT; // nhiet do trung binh
}thoitiet;

typedef struct tinhtoan
{
	float totalRyear;// tong luong mua ca nam
	float highTyear; // nhiet do cao nhat ca nam
	float lowTyear; // nhiet do thap nhat ca nam
	float averageTyear; // nhiet do trung binh ca nam

}tinhtoan;

int main()
{
	thoitiet _thoitiet[12];
	tinhtoan _tinhtoan;
	// nhap du lieu 12 thang 
	for(int i=0;i<12;i++)
	{
		printf("-------------\n");
		printf("thang thu %d\n", i+1);
		do{
			printf("nhap tong luong mua cua thang %d: \n", i+1);
			scanf("%f", &_thoitiet[i].totalR);
			if (_thoitiet[i].totalR<0 || _thoitiet[i].totalR>1000)
				printf("nhap sai, vui long nhap lai\n");
		}while(_thoitiet[i].totalR<0 || _thoitiet[i].totalR>1000);
		
		do{
			printf("nhap nhiet do cao nhat cua thang %d: \n", i+1);
			scanf("%f",&_thoitiet[i].highT);
			if(_thoitiet[i].highT<-40 || _thoitiet[i].highT>50)
				printf("nhap sai, vui long nhap lai\n");
		}while(_thoitiet[i].highT<-40 || _thoitiet[i].highT>50);
		do
		{
			printf("nhap nhiet do thap nhat cua thang %d: \n", i+1);
			scanf("%f", &_thoitiet[i].lowT);
			if(_thoitiet[i].lowT<-40 || _thoitiet[i].lowT>50)
				printf("nhap sai, vui long nhap lai\n");
		}while(_thoitiet[i].lowT<-40 || _thoitiet[i].lowT>50);
		do
		{
			printf("nhap nhiet do trung binh cua thang %d: \n", i+1);
			scanf("%f", &_thoitiet[i].averageT);
			if(_thoitiet[i].averageT<-40 || _thoitiet[i].averageT>50)
				printf("nhap sai, vui long nhap lai\n");
		}while(_thoitiet[i].averageT<-40 || _thoitiet[i].averageT>50);
		


	}
	// tinh toan ca nam
	_tinhtoan.totalRyear=0;
	_tinhtoan.highTyear=0;
	_tinhtoan.lowTyear=0;
	_tinhtoan.averageTyear=0;
	float tong=0;
	for(int i=0;i<12;i++)
	{
		// tong luong mua ca nam
		_tinhtoan.totalRyear=_tinhtoan.totalRyear + _thoitiet[i].totalR;


		
		//float tong=0;
		tong= tong + _thoitiet[i].averageT;

	}
	_tinhtoan.averageTyear= tong/12; // nhiet do trung binh ca nam
	// nhiet do cao nhat va thap nhat trong 1 nam
	
	float tmp1;
 	for(int i=0;i<11;i++)
 		for(int j=i+1;j<12;j++)
 			if (_thoitiet[i].highT>_thoitiet[j].highT)
 			{
 				tmp1=_thoitiet[i].highT;
 				_thoitiet[i].highT=_thoitiet[j].highT;
				_thoitiet[j].highT=tmp1;
 			}

 	float tmp2;
 	for(int i=0;i<11;i++)
 		for(int j=i+1;j<12;j++)
 			if (_thoitiet[i].lowT>_thoitiet[j].lowT)
 			{
 				tmp2=_thoitiet[i].highT;
 				_thoitiet[i].lowT=_thoitiet[j].lowT;
				_thoitiet[j].lowT=tmp2;
 			}
 	//in ra cac so vua nhap
 	printf("in ra cac so vua nhap: \n");
 	printf("tong luong mua     t cao nhat     t thap nhat     t trung binh\n");
 	for(int i=0;i<12;i++)
 		printf("%.2f %18.2f %18.2f %18.2f\n", _thoitiet[i].totalR, _thoitiet[i].highT, _thoitiet[i].lowT, _thoitiet[i].averageT);
	// in ra cac thong tin luong mua trung binh, tong luong mua ca nam, nhiet do cao nhat, nhiet do thap nhat
	
	printf("tong luong mua ca nam la %f \n",_tinhtoan.totalRyear);
	printf("nhiet do cao nhat la %f \n",_thoitiet[11].highT);
	printf("nhiet do thap nhat la %f\n", _thoitiet[0].lowT);
	printf("nhiet do trung binh ca nam la %f \n",_tinhtoan.averageTyear);
	return 0;
}


