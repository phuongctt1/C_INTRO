/* •Viết một hàm trả về con trỏ tới giá trị lớn nhất của một dãy số thực.
   Nếu mảng rỗng, trả về NULL.
   Nguyên mẫu của hàm như dưới đây
   double* maximum(double* a, int size);
   •Viết chương trình chính kiểm tra hàm đã viết */
#include<stdio.h>
double *maximum(double *a, int size);
void SapXep(double *a, int size);
void nhapMang(double *a, int size);
// sap xep theo thu tu tang dan
void SapXep(double *a, int size)
{
double t;
 for(int i=0;i<size-1;i++)
 	for(int j=i+1;j<size;j++)
 		if (a[i]>a[j])
 		{
 			t=a[i]; 
 			a[i]=a[j];
			a[j]=t;
 		}

} 
void nhapMang(double *a, int size)
{
	for(int i=0;i<size;i++)
	{
		printf("nhap phan tu thu %d: ",i+1);
		scanf("%lf", (a+i));
	}
}


double *maximum(double *a, int size)
{
	// sap xep theo thu tu tang dan
	SapXep(a, size);
	// tra ve phan tu lon nhat trong mang ung voi phan tu cuoi trong mang khi da sapxep
	return (a+size-1);

}
int main()
{
	int size;
	double *a;
	printf("nhap size: \n");
	scanf("%d",&size);
	nhapMang(a,size);
	printf("so lon nhat trong day la: \n");
	printf("%.2lf \n",*(maximum(a,size)));
	return 0;

}