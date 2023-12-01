#include<stdio.h>
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;	
}
int main(){
//	int a = 10;
//	int *pointer = &a;
//	
//	printf("Dia chi cua bien a = %d\n", &a);
//	
//	printf("Dia chi cua bien a nam trong pointer = %d\n", pointer);
//	
//	printf("Truy cap vao gia tri nam trong bien a thong qua con tro pointer %d", *pointer);
//	
//	return 10;
	// Khi dung con tro
	//1. Khai báo ra con tro
	// type *pointer_name = &var_address;
	
	//2. Su dung con tro
	// Khi thao tac voi dia chi cua bien dang duoc
	// con tro tham chieu: pointer_name
	
	// Khi tac voi gia tri cua bien dang duoc
	// con tro tham chieu: *pointer_name
//	char letter = 'A';
//	char *pointerA= &letter;
//	
//	printf("1. %c, %c, %d\n", letter, *pointerA, pointerA);
//	
//	char letter2 = 'B';
//	
//	pointerA = &letter2;
//	
//	printf("2. %c, %c, %d \n", letter2, *pointerA, pointerA);
//	
//	(*pointerA)++;
//	
//	printf("3. %c, %c, %d\n", letter2, *pointerA, pointerA);
	
	int number1=10;
	int number2=20;
	
	printf("Truoc khi duoc doi cho number1= %d va number2= %d\n", number1, number2);
	
	swap (&number1, &number2);
	
	printf("Sau khi duoc doi cho number1= %d va number2= %d", number1, number2);
	
	
	return 10;
	
}
