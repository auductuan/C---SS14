#include<stdio.h>
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int number1, number2;
	printf("Nhap mot so nguyen: ");
	scanf("%d", &number1);
	printf("Nhap mot so nguyen: ");
	scanf("%d", &number2);
	printf("Hai so truoc truoc khi doi cho la: %d va %d\n", number1, number2);
	
	int allow1 = number1 - number2;
	printf("Hieu hai so truoc khi doi cho la: %d\n", allow1);
	
	swap(&number1, &number2);
	
	printf("Hai so sau khi doi cho la: %d va %d\n", number1, number2);
	
	int allow2 = number1-number2;
	
	printf("Hieu hai so sau khi doi cho la: %d\n", allow2);
	
	return 10;
}
