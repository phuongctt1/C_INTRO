 /* • Trong toán học,
 số hoàn hảo là các số nguyên dương mà tổng các ước số nhỏ hơn số đó bằng chính nó. 
Ví dụ: 6=1+2+3
• Viết chương trình hiển thị tất cả các số nhỏ hơn số N nhập từ bàn phím. */

#include<stdio.h>
#include<stdlib.h>

// Hàm kiểm tra số hoàn hảo
int sohoanhao(n)
{
    int j,sum=0;
    for(j=1;sum<=n && j<n;++j)  
    if(n%j==0) sum+=j;
        if(sum==n) return 1;
    else return 0;
}


int main()
{
    int n,i,j,s;
    int a;
    printf("Nhap n:");
    scanf("%d",&n);
    printf("in so hoan hao :\n");
                                             
    for(a=0,i=1;i<n;++i)
    if(sohoanhao(i))                     
      	printf("%d ",i);
                              
    return 0;
}