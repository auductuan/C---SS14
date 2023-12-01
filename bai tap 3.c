#include<stdio.h>
int count (char *chuoi){
	int count=0;
	char *pointer=chuoi;
	
	while (*pointer!='\0'){
		count++;
		pointer++;
	}
	return count;
}
int main(){
	char a[1000];
	char b[1000];
	printf("Nhap vao chuoi ki tu bat ki: ");
	gets(a);
	printf("Nhap vao chuoi ki tu bat ki: ");
	gets(b);
	int letters1=count(a);
	printf("So ki tu trong chuoi 1 la: %d\n", letters1);
	int letters2=count(b);
	printf("So ki tu trong chuoi 2 la: %d\n", letters2);
	if(letters1>letters2){
		printf("Chuoi ki tu 1 lon hon chuoi ki tu 2");
	}
	else if(letters2>letters1){
		printf("Chuoi ki tu 2 lon hon chuoi ki tu 1");
		
	}
		
	
	return 0;
	
}
