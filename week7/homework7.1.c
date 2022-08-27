/* Hỏi người dung nhập số n• Nếu n = -1 thoát chương trình
•Ngược lại, liệt kê tất cả các số nguyên tố nhỏ hơn n. Sau đó yêu cầu nhập số tiếp theo */
#include<stdio.h>
#include<stdlib.h>

int checkngto(int k)
{
	int a =0;
	for(int i=1;i<=k;i++)
	{
		if(k%i==0)
			a++;
	}
	if(a == 2)
		return 1;
	return 0;
}

void lietke(int n)
{
	for(int i=2;i<n;i++)
	{
		if(checkngto(i) == 1)
			printf("%d\n",i);
	}
}

int main()
{
	int n;
	do{
	
		printf("nhap vao 1 so tu nhien \n");
		scanf("%d",&n);
		
		lietke(n);
		
	
	}while(n !=-1);
	
	return 0;
}