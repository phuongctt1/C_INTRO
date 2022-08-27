/*•Viết chương trình yêu cầu nhập vào tuổi (age) và hiển thị xem đó là người lớn hay trẻ con, người già
• Trẻ con : age <18
• Người lớn :  18<=age<65
• Người già: age >=65
• Thêm vào tính năng cho bài tập 6.2: mua vé xem phim với giá như sau: :
• Giá ngày thường là $7 trong khi cuối tuần là $10
• Trẻ em: giảm 50%
• Người già: giảm 30%
• In ra vé xem phim theo mẫu
• Movie: Avatar
• Class: Child
• Date: Weekend
• Price: $5
• Cải tiến phiên bản trên bằng cách hỏi :
• Số người(<=3)
• Tuổi mỗi ngườiSau đó in thông tin tương ứng */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{	
	char d[1];
	int number;
	int a[3];
	int b[3];
	printf("Number of persons(<=3): \n");
	scanf("%d", &number);
	for(int i=1;i<=number; i++)
	{
		printf("Age of No %d: ",i);
		scanf("%d",&a[i]);
	}
	printf("Title of movie: Gone with the wind\n");
	printf("WEEK(E)ND OR WEE(D)AY?\n");
	char s1="E";
	char s2="D";
	printf("??");
	
	int c;
	while ((c = getchar()) != '\n' && c != EOF) { };
	gets(d);
	printf("%s",d);
	
	while ((c = getchar()) != '\n' && c != EOF) { };

	if(strcmp(d,s1)==0)
	{
		for(int i=1;i<=3;i++)
		{if(a[i]<18)
			b[i]=10*0.5;
		else if (a[i]>=65)
			b[i]=10*0.7;
		else
			b[i]=10;
		}

	}
	if(strcmp(d,s2)==0)
	{
		for(int i=1;i<=3;i++)
		{if(a[i]<18)
			b[i]=7*0.5;
		else if (a[i]>=65)
			b[i]=7*0.7;
		else
			b[i]=7;
		}
	}
	printf("Payment: %d \n",b[1]+b[2]+b[3] ); 
	return 0;

}