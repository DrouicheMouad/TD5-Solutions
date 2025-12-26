#include <stdio.h>
void FillArray(int A[], int Size) {
	for (int i = 0; i < Size; i++) {
		printf("Enter the value A[%d] ", i);
		scanf("%d", &A[i]);
	}
}
void PrintArray(int A[], int Size) {
	for (int i = 0; i < Size; i++) {
		printf("  %d ", A[i]);
	}
	printf("\n");
}

int main() {
	// a) Using another array 
	/*
	int Size = 0;
	printf("Enter a size for your array "); scanf("%d", &Size);
	int A[Size];
	FillArray(A, Size);
	int Temp[Size];
	for (int i = 0; i < Size; i++) {
	       Temp[i] = A[Size - 1 - i];
		}
     printf("Array Reverted");
	 PrintArray(Temp, Size);
	*/
	
	//b) Without using another array
	int Size = 0;
	printf("Enter a size for your array "); scanf("%d", &Size);
	int A[Size];
	FillArray(A, Size);
	int temp;
	for (int j = 0; j < Size / 2; j++) {
		temp = A[j];
		A[j] = A[Size - 1 - j];
		A[Size - 1 - j] = temp;
	}
	printf("Array Reverted");
	PrintArray(A, Size);
	return 0;
}