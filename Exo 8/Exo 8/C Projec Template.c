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
void SortArrayAscendingly(int A[], int Size) {
	bool swapped;
	int temp;
	for (int i = 0; i < Size - 1; i++) {
		swapped = 0;
		for (int j = 0; j < Size - 1 - i; j++) {
			if (A[j] > A[j + 1]) {
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
				swapped = 1;
			}
		}
		if (swapped == 0) {
			printf("Array ascendingly sorted !\n");
			break;
		}
	}
}
int main() {
	int Size = 0;
	printf("Enter a size for your array "); scanf("%d", &Size);
	int A[Size], Value;
	FillArray(A, Size - 1);
	SortArrayAscendingly(A, Size - 1);
	PrintArray(A, Size - 1);
	printf("Enter the value you want to insert ");
	scanf("%d", &Value);
	A[Size - 1] = Value;
	int i = 0, temp = 0;
	while (Value < A[Size - 2 - i]) {
		temp = A[Size - 1 - i];
		A[Size - 1 - i] = A[Size - 2 - i];
		A[Size - 2 - i] = temp;
		i++;
	}
	printf("Value inserted, here's the sorted array\n");
	PrintArray(A, Size);

	return 0;
}