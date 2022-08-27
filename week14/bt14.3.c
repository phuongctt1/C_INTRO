/*Viết một chương trình quản lý sinh viên sử dụng cấu trúc :
typedef struct{
    char id[6];
    char name[31];
    float grade;
    char classement
}student;
     Classementđược phân loại tùy thuộc vào grade:
     • 9-10: A (Excellent)
     • 8-9: B (Good)
     • 6.5-8: C (Medium)
     • < 6.5 : D (Bad)
 Chương trình nhập dữ liệu n sinh viên từ bàn phím (n cũng nhập từ bàn phím).
  Sau đó in ra danh sách sinh viên theo thứ tự giảm dần của
   điểm (grade)
   Name         Grade        Classment
   Dao Tiem       9.3             A
   Dinh Lan       8.2             B
   Bui Luu Van    5.7             D
   */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct Student{
    char id[6];
    char name[31];
    float grade;
    char classement[2];
}student;
void clear (void)
    {    
        while ( getchar() != '\n' );
    }
int main()
{
    student st[4];//
    int n;
    printf("nhap so sinh vien: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("sinh vien thu %d\n", i+1);
        clear();
        printf("nhap id : ");
        gets(st[i].id);
        clear();
        printf("nhap ten sv :");
        gets(st[i].name);
        printf("nhap diem :");
        scanf("%f",&st[i].grade);
    }
    
    //phan loai sinh vien vao classement
    for(int i=0;i<n;i++)
    {
        st[i].classement[1]=" ";// dau tien phai gan gia tri cho st[i].classement truoc
    }
   

    for(int i=0;i<n;i++)
    {
        if(st[i].grade>=9 && st[i].grade<=10)
           strcpy(st[i].classement,"A");
            
        else if(st[i].grade>=8 && st[i].grade<9)
            strcpy(st[i].classement,"B");

            
        else if(st[i].grade>=6.5 && st[i].grade<8)
            strcpy(st[i].classement,"C");
           
        else
            strcpy(st[i].classement,"D");
            

    }
    // thu tu giam dan cua diem
    student tmp;
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(st[i].grade<st[j].grade)
            {
                tmp=st[i];
                st[i]=st[j];
                st[j]=tmp;
            }

    
    // in thong tin thu tu giam dan theo diem
    printf("----------------\n");
   for(int i=0;i<n;i++)
   {
    printf("%s %s %f %s \n",st[i].id, st[i].name, st[i].grade, st[i].classement);
    
   }
   
   /* tim kiem theo ten roi in ra
    char name2[50];
    printf("nhap name can tim kiem \n");
    clear();
    gets(name2);
    for (int i=0;i<n;i++)
    {
        if(strcmp(st[i].name,name2)==0)
            printf("%s %s %f %s \n",st[i].id, st[i].name, st[i].grade, st[i].classement);

    }
    */

   return 0;
}