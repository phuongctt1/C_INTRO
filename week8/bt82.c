/*
• Mở rộng bài 8.1, viết chương trình có giao diện như sau.
• 1. Calculate n!
  2. Exit
•  Nếu người dung chọn 1,
 chương trình sẽ hỏi người dùng nhập vào số nguyên dương n.
 Nếu nhập sai, chương trình yêu cầu nhập lại đến khi nhận được số nguyên dương.
 Sau đó, chương trình in ra kết quả n! và quay lại giao diện ban đầu. 
• Nếu người dùng chọn 2, thoát chương trình */
#include<stdio.h>

int main()
{	printf("-------------MENU----------\n");
	printf("1. Calculate\n");
	printf("2.Exit\n");
	int luachon;
	do
	{


	printf("nhap lua chon cua ban: ");
	scanf("%d",&luachon);
	if (luachon != 1 && luachon!=2)
    		{
    			printf("ko hop le. Moi nhap lai\n");
    		}
    else if(luachon ==1)
    	{
    		int i=1;
			int f=1;//ket qua
			int n;
			do
			{
		
				printf("nhap vao so nguyen duong n: ");
				scanf("%d",&n);
				while(i<=n)
				{
					f=f*i;
					i++;
				}
				if(n>=0) printf("ket qua %d! = %d \n",n,f);
				if(n<0)
			
					printf("ban nhap sai, moi nhop lai \n");

			}while(n<0);
    	}
	else 
	{
		break;
	}
	
}while(1);
return 0;
}