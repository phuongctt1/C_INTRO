#include<stdio.h>
#include<string.h>

int main()
{
	char name[50];
	int mssv;
	int a;
	int b;
	int c;
	char nganh[70];
	printf("nhap ten: \n");
	fgets(name, sizeof(name), stdin); 
	printf("nhap mssv: \n");
	scanf("%d",&mssv);
	printf("ngay: \n");
	scanf("%d",&a);
	printf("thang\n");
	scanf("%d",&b);
	printf("nam\n");
	scanf("%d",&c);
	printf("nganh hoc\n");
	fgets(nganh, sizeof(nganh), stdin);
	printf("%2sname: \n",name);
	printf("%2dmssv\n",mssv);
	printf("ngay thang nam sinh %d /%d/%d\n",a,b,c);
	printf("nganh hoc %s, nganh");
	return 0;

}