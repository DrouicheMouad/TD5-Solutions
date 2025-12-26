#include <stdio.h>
#include <stdbool.h>
void FillArray(int A[], int Size) {
	for (int i = 0; i < Size; i++) {
		printf("Enter the value A[%d] ", i);
		scanf("%d", A + i);
	}
}
void PrintArray(int A[], int Size) {
	for (int i = 0; i < Size; i++) {
		printf("A[%d] = %d\n", i, A[i]);
	}
}
void SortArrayDescendingly(int A[], int Size) {
	bool swapped;
	int temp;
	for (int i = 0; i < Size - 1; i++) {
		swapped = 0;
		for (int j = 0; j < Size - 1 - i; j++) {
			if (A[j] < A[j + 1]) {
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
				swapped = 1;
			}
		}
		if (swapped == 0) {
			printf("Array descendingly sorted !\n");
			break;
		}
	}
}
int main() {
	int Size = 0;
	printf("Enter a size for your array "); scanf("%d", &Size);
	int A[Size], Value;
	FillArray(A, Size);
	SortArrayDescendingly(A, Size);
	PrintArray(A, Size);
	printf("Enter the value you're looking for ");
	scanf("%d", &Value);
	int Start = 0, End = Size - 1, Mid;
	while (Start <= End) {
		Mid = (End + Start) / 2;
		if (Value == A[Mid]) {
			printf("The value %d is at position %d\n", Value, Mid);
			return 0;
		}
		else if (Value > A[Mid])
			End = Mid - 1;
		else
			Start = Mid + 1;
	}
	printf("The value %d is not in the array\n", Value);
	return 0; 
}