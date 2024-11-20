#include<stdio.h>
int main(){
	int chieuDai;
	chieuDai = 15;
	int chieuRong;
	chieuRong = 8;
	int chuVi;
	chuVi = (chieuRong + chieuDai) * 2;
	int dienTich;
	dienTich = chieuRong * chieuDai;
	printf("Chieu Dai hinh chu nhat la %d \n",chieuDai);
	printf("Chieu Rong hinh chu nhat la %d \n",chieuRong); 
	printf("Dien tich hinh chu nhat la %d \n",dienTich);
	printf("Chu vi hinh chu nhat la %d \n ", chuVi);
	return 0; 
}
