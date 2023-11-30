#include<stdio.h>
int demKytu(char*chuoi){
	int dem = 0;
	char*ptr = chuoi;
	while(*ptr != '\0'){
		dem++;
		ptr++;
	}
	return dem;
}
int main(){
	char chuoi[100];
	printf("Nhap chuoi ki tu:\n");
	scanf("%s", chuoi);
	int soKytu = demKytu(chuoi);
	printf("So ky tu trong chuoi la:%d\n", soKytu);
	return 0;
}
