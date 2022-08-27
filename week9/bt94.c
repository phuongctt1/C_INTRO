/* xác định xem một năm có phải là năm nhuận hay không?
 Tham số đầu vào là số năm. Một năm là năm nhuận nếu
 •  Là bội của 4 nhưng không phải là bội của 100
 •  Là bội số của 400
 •  Ví dụ, 1996 hay 2000 là năm nhuận nhưng 1900, 2002 và 2100 không phải.
 •  Sử dụng hàm trên để yêu cầu người sử dụng nhập vào tháng,
  năm và trả về số ngày trong tháng. */
  #include<stdio.h>
  #include<stdlib.h>
  #include<math.h>
  int isLeapYear(int n)// n la nam nhuan dc nhap tu ban phim
  {
  	if(n % 400 == 0)
  		return 366;
  	else if(n % 4 ==0 && n % 100 !=0)
  		return 366;
  	else 
  		return 365;
  }
int main()
{
	int n;
	printf("nhap vao so nam: ");
	scanf("%d",&n);
	printf("\n");
	if(isLeapYear(n)==366)
		printf("nam %d la nam nhuan, co %d ngay\n", n, isLeapYear(n));
	else
		printf("nam %d khong phai nam nhuan, co %d ngay\n",n, isLeapYear(n));
	return 0;
}