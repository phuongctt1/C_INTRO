#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	
	int n;
	int namTram, haiTram, motTram, namMuoi, haiMuoi, muoiNghin, namNghin;
	printf("nhap so tien can rut(chia het cho 5000d)");
	scanf("%d",&n);
	namTram = n/500000;
	n = n % 500000;
	haiTram = n/200000;
	n = n % 200000;
	motTram = n/100000;
    n = n % 100000;// chia lay phan du
    namMuoi = n/50000;
    n = n % 50000;// chia lay phan du
    haiMuoi = n/20000;
    n = n % 20000;// chia lay phan du
    muoiNghin = n/10000;
    n = n % 10000;
    namNghin = n/5000;

    printf("Ket qua: \n");
    printf("%d*500000 + %d*200000 + %d*100000 + %d*50000 + %d*20000 + %d*10000 + %d*5000\n", namTram, haiTram, motTram, namMuoi, muoiNghin, namNghin);
	
	
	return 0;
	
}
