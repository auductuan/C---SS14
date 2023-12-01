#include<stdio.h>
void swap(int *a, int*b){
	*a=*b;
	int temp= *b;
}
int main(){
	//1. Khai bao con tro
	// type *pointerName;
	// - Gan cho con tro gia tri khoi tao;
	// int number = 10;
	// int *pointer = &number
	
	//2. Su dung con tro
	// -Thao tac voi dia chi nam trong con tro
	// pointer = &newAddress;
	// pointer++;
	
	//- Thao taac voi gia tri cua bien ma con tro dang tro toi 
	//(*pointer)++
	//(*pointer)--
	//*pointer = newValue;
	
	//3. Su dung con tro nhu tham so (parameters) trong ham
	
	int number1=10;
	int number2=20;
	
	swap(&number1, &number2);
	
	int arr[] = {3,5,7,9,11};
	
	int *pointerArr = arr;
	
	printf("Dia chhi cua bien arr = %d\n", &arr);
	
	printf("Dia chi duoc chua trong bien pointerArr= %d\n", pointerArr);
	for(int i=0;i<sizeof(arr)/sizeof(int);i++){
		printf("numbers[%d]=%d\t",i, arr[i]);
	}
	
	return 0;
}
