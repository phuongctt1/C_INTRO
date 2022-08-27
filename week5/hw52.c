/*•FPTShop có khuyến mại mua sản phẩm Apple tháng này.
 • Nếu bạn mua 2 iPhone trở lên (1000 USD/iPhone): giảm giá 5%
 • Nếu bạn mua 2 Macbook trở lên(1500 USD/Macbook): giảm giá 10%
 •Viết chương trình nhập vào số iPhone và Macbook người dùng sẽ mua, 
  hiển thị chi tiết hóa đơn họ phải trả. */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int soiphone, somacbook;
	float a=0,b=0;
	printf("nhap so iphone: \n");
	scanf("%d",& soiphone);
	printf("nhap so macbook: \n");
	scanf("%d",& somacbook);
	
		if(soiphone>=2)
		a=((soiphone*1000)*0.95 );
	else
		a=(soiphone*1000);
	
	
	if(somacbook>=2)
		b=((somacbook*1500)*0.9);
	else
		b=(somacbook*1500);
	// hien thi hoa don
	printf("   San Pham      Gia\n");
	printf("%2d iphone %15.2f\n",soiphone, a);
	printf("%2d macbook %14.2f\n",somacbook, b);
	printf("=================\n");
	printf("TONG: %f",a+b);
	return 0;

}