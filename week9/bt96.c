/* • Định nghĩa một hàm trả về số năm trôi qua để tuổi cha sẽ gấp đôi tuổi con
 (đầu vào là tuổi cha và tuổi con).
 • Viết chương trình hỏi tuổi cha và con (số nguyên).
  Sử dụng hàm đã viết để hiển thị kết quả.
   Trường hợp không thể tính 
   (vd: tuổi cha 80, tuổi con 50), hiển thị tương ứng.
   • Kiểm soát dữ liệu:• Tuổi một người không quá 150
   • Tuổi cha >= tuổi con + 18
   • Tuổi con phải không âm */
#include<stdio.h>
int tinhnam(int tuoicha, int tuoicon)
{
	int dem=0;
	do
	{
		tuoicha++;
		tuoicon++;
		dem++;

	}while(tuoicha!=2*tuoicon);
	return dem;
}
int main()
{
	int n;
	int tuoicha;
	int tuoicon;
	
	printf("nhap tuoi cha: \n");
	scanf("%d",&tuoicha);
	printf("nhap tuoi con \n");
	scanf("%d", &tuoicon);
	printf("sau %d nam thi tuoi cha= 2 lan tuoi con", tinhnam(tuoicha,tuoicon));
	return 0;
}