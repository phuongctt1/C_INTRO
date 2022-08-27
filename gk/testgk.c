
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int n;
	int nguoi[10];
	float tienluong[10];
	do
	{
		printf("please enter the number of employee: \n");
		scanf("%d",&n);
		if(n<3 || n>10)
			printf("invalid\n");
	}while(n<3 || n>10);
	
	// nhap tien luong cua moi nguoi lao dong
	
	for(int i=1; i<=n;i++)
	{
		do
		{
		printf("please enter the salary od the employee, No.  %d: \n", i);
		scanf("%f", &tienluong[i]);
		if(tienluong[i]<50 || tienluong[i]>10000)
			printf("invalid\n");
		}while(tienluong[i]<50 || tienluong[i]>10000);

		
	}
	// muc luong theo 6 muc (A,B,C,D,E,F)
	int demA=0;
	int demB=0;
	int demC=0;
	int demD=0;
	int demE=0;
	int demF=0;
	for(int i=1;i<=n;i++)
	{
		if (tienluong[i]>=5000 && tienluong[i]<=10000)
			demA++;
		
		else if (tienluong[i]>=2000&& tienluong[i]<5000)
			demB++;
		
		else if(tienluong[i]>=1000&& tienluong[i]<2000)
			demC++;
		
		else if(tienluong[i]>=500 && tienluong[i]<1000)
			demD++;
		
		else if(tienluong[i]>=100&& tienluong[i]<500)
			demE++;
		
		else 
			demF++;
		

	}
	printf("Satatistics\n");
	printf("Salary level\n");
	printf("A: %d\n", demA);
	printf("B: %d\n",demB);
	printf("C: %d\n", demC);
	printf("D: %d\n",demD);
	printf("E: %d\n", demE);
	printf("F: %d\n",demF);


	// luong thap nhat va luong cao nhat
	float max=0;
	float min=0;
	for(int i=1;i<=n;i++)
	{
		if(max<tienluong[i])
			max=tienluong[i];
	}
	printf("maximal salary: %f \n",max);
	for(int i=1;i<=n;i++)
	{
		if(min > tienluong[i])
			{
				min=tienluong[i];
			}
	}
	printf("worst salary: %f\n", min);
	// tinh trung binh tien luong
	float tong=0;
	for(int i=1;i<=n;i++)
	{
		tong=tong+tienluong[i];
	}
	float trungbinh;
	trungbinh=(tong/n);
	printf("avergage salary: %f\n",trungbinh);
	return 0;



}