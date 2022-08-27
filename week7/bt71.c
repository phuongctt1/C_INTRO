/* •Viết chương trình hiển thị 10 số nguyên 1-10 và bình phương của chúng.
 1  1
 2  4
 3  9
 ...
 10 100
  */
#include<stdio.h>
int main()
{
	printf(" hien thi so nguyen 1-10 va binh phuong cua chung\n");
	for(int i=1; i<=10;i++)
	{
		printf("%d    %d\n",i, i*i);
	}
	return 0;
}