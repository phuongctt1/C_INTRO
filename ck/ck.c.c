// tao 1 menu

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void clear(void)
{
	 while ( getchar() != '\n' );
}
typedef struct _thidau
{
	int ID;
	char Nation[30];
	char Name[30];
	float R1;
	float R2;
	float R3;
	float FR;

}thidau;
int main()
{
	thidau td[21];
	int n;
	int luachon;
	char key1[30]=" ";
			char key2[30]=" ";
	do
	{
		printf("---------MENU----------\n");
		printf("1.Nhap thong tin truoc khi thi dau \n");
		printf("2.In thong tin\n");
		printf("3.Thi dau\n");
		printf("4.Tim kiem\n");
		printf("5.In ket qua\n");
		printf("6.Thoat\n");
		printf("-----------------------\n");
		printf("nhap lua chon cua ban: \n");
		scanf("%d",&luachon);
		if(luachon!=1 &&luachon!=2 && luachon !=3 && luachon !=4 && luachon !=5&& luachon!=6)
		{
			printf("khong hop le, moi nhap lai: \n");
		}
		else if(luachon==1)
		{
			printf("1.Nhap thong tin truoc khi thi dau \n");
			do
			{
				printf("nhap so luong van dong vien\n");
				scanf("%d",&n);
				if(n<=0 || n>20)
					printf("ko hop le, moi nhap lai \n");

			}while(n<=0 || n>20);
			for (int i=0;i<n;i++)
			{
				clear();
				printf("nhap van dong vien thu %i\n",i+1);
				printf("nhap ID: \n");
				scanf("%d", &td[i].ID);
				printf("nhap Nation:\n");
				clear();
				gets(td[i].Nation);
				
				printf("nhap Name: \n");
				gets(td[i].Name);
				clear();

			}

		}
		else if(luachon==2)
		{
			
			printf("2.In thong tin\n");
			// thong tin duoc in khi chua thi dau
			printf("    ID           Nation          Name        R1    R2   R3   FR\n");
			for(int i=0;i<n;i++)
			{
				
				printf("%5d %15s %15s \n ", td[i].ID, td[i].Nation, td[i].Name);
			}
			

		}
		else if(luachon==3)
		{
			// nhap ket qua cua tung van dong vien sau moi lan thi dau
			for (int i=0;i<n;i++)
			{
				printf("nhap van dong vien thu %i\n",i+1);
				printf("nhap R1: \n");
				scanf("%f", &td[i].R1);
			}
			for (int i=0;i<n;i++)
			{
				printf("nhap van dong vien thu %i\n",i+1);
				
				printf("nhap R2:\n");
				scanf("%f", &td[i].R2);
			
			}
			for (int i=0;i<n;i++)
			{
				printf("nhap van dong vien thu %i\n",i+1);
				printf("nhap R3:\n");
				scanf("%f", &td[i].R3);
			}
			printf("lan 1\n");
			printf("    ID           Nation          Name        R1    R2   R3   FR\n");
			
			for(int i=0;i<n;i++)
			{
				
				printf("%5d %15s %15s %5.2f\n ", td[i].ID, td[i].Nation, td[i].Name,td[i].R1);
			}
			printf("lan 2\n");
			printf("    ID           Nation          Name        R1    R2   R3   FR\n");
			
			for(int i=0;i<n;i++)
			{
				
				printf("%5d %15s %15s %5.2f %5.2f\n ", td[i].ID, td[i].Nation, td[i].Name,td[i].R1, td[i].R2);
			}
			printf("    ID           Nation          Name        R1    R2   R3   FR\n");
			for(int i=0;i<n;i++)
			{
				printf("lan 3\n");
			
			printf("%5d %15s %15s %5.2f %5.2f %5.2f\n ", td[i].ID, td[i].Nation, td[i].Name,td[i].R1, td[i].R2,td[i].R3);
			}
			
		}	
		else if(luachon==4)
		{
			printf("4.tim kiem\n");
			
			
			printf("nhap ten quoc gia\n" );
				clear();
				gets(key1);
				for(int i=0;i<n;i++)
				{
						if(strcmp(td[i].Nation,key1)==0)
						printf("%5d %15s %15s %5.2f %5.2 %5.2f\n ", td[i].ID, td[i].Nation, td[i].Name,td[i].R1, td[i].R2,td[i].R3);
					
				}
				clear();
				printf("nhap name: \n");

				for(int i=0;i<n;i++)
				{
						if(strcmp(td[i].Name,key2)==0)
						printf("%5d %15s %15s %5.2f %5.2 %5.2f\n ", td[i].ID, td[i].Nation, td[i].Name,td[i].R1, td[i].R2,td[i].R3);
					
				}



		}
		else if(luachon==5)
		{
			printf("5.\n");
		}
		else
		{
			break;
		}

	}while(1);
	return 0;
}
