/*• Bạn nói chuyện qua mạng với 2 chàng trai và phải quyết định 
xem nên hẹn hò với chàng trai nào.
 • Hãy hỏi các chàng trai
 • Tuổi: 
 • (<=18): -2 điểm 
 • 18 < age < 24: 5 điểm
 • >= 24: 2 điểm• Chiều cao:
 • >= chiều cao của bạn: + 3 điểm
 • < chiều cao của bạn : - 2 điểm
 • Chàng trai có điểm cao hơn sẽ được chọn. Nếu 2 chàng trai có cùng điểm,
  hẹn hò cả hai vào thứ bảy và Chủ Nhật. */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int tuoi1,tuoi2;
	int chieucao1, chieucao2;
	int diem1=0;
	int diem2=0;
	printf("Hi Minh\n");
	printf("how old are you: \n");
	scanf("%d",&tuoi1);
	if(tuoi1<=18)
		diem1=diem1-2;
	else if (tuoi1>=24)
		diem1=diem1 + 2;
	else
		diem1= diem1 + 5;
	printf("chieu cao: \n");
	scanf("%d",&chieucao1);
	if(chieucao1>=151)
		diem1=diem1 + 3;
	else
		diem1=diem1-2;
	printf("diem %d\n",diem1); 
	
	printf("Hi Manh\n");
	printf("how old are you: \n");
	scanf("%d",&tuoi2);
	if(tuoi2<=18)
		diem2=diem2-2;
	else if (tuoi2>=24)
		diem2=diem2 + 2;
	else
		diem2= diem2 + 5;
	printf("chieu cao: \n");
	scanf("%d",&chieucao2);
	if(chieucao1>=151)
		diem1=diem1 + 3;
	else
		diem1=diem1-2;
	printf("diem %d\n",diem2); 
	// ket qua
	printf("decision: \n");
	if (diem1>diem2)
		printf("Minh, are you free on Saturday?\n");
	else if(diem1=diem2)
		printf("Minh with Manh, are you free on Saturday?\n");
	else
		printf("Manh,are you free on Saturday?\n");

	return 0;


}