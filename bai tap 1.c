#include<stdio.h>
int main(){
	int a = 10;
	int *pointer = &a;

	
	printf("Truy cap vao gia tri nam trong bien a thong qua con tro pointer: %d", *pointer);
	
	return 10;
}
