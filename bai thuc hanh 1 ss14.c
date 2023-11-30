#include<stdio.h>
void hoandoi(int*a, int*b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int x, y;
	printf("Nhap gia tri cho bien x: ");
	scanf("%d", &x);
	printf("Nhap gia tri cho bien y: ");
	scanf("%d", &y);
	printf("Gia tri trc khi bi hoan doi: x = %d, y = %d\n", x, y);
	hoandoi(&x, &y);
	printf("Gia tri sau khi bi hoan doi: x = %d, y = %d\n", x, y);
	return 0;
}
