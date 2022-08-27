/*
	•Viết chương trình sử dụng cấu trúc while để phân tích kết quả kiểm tra,
xem bao nhiêu sinh viên qua và trượt môn học
	•Giả sử tổng số sinh viên là 10.
Bạn cần hỏi điểm (grade) của mỗi sinh viên (từ 0 đến 10)
và in ra số sinh viên trượt và qua môn học
	•Luật:grade >=4: qua môn
	grade<4: trượt */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i=1;
	float grade;
	int count1=0;
	int count2=0;
	printf("nhap 10 nguoi lien tiep: \n");
	while(i<=10)
	{
		printf("nhap diem (grade) cua ban: ");
		scanf("%f",&grade);
		if(grade>=4)
			count1++;
		else
			count2++;
		i++;

	}
	printf("so sinh vien truot: %d\n", count2);
	printf("so sinh vien qua mon hoc: %d\n", count1);
	return 0;
}
