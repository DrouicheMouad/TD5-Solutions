#include <stdio.h>
void FillArray(int A[], int Size) {
	for (int i = 0; i < Size; i++) {
		printf("Enter A[%d] ", i);
		scanf("%d", &A[i]);
	}
}
void PrintArray(int A[], int Size) {
	for (int i = 0; i < Size; i++) {
		printf("\n%d ", A[i]);
	}
}
int main() {
	int n, m;
	printf("Enter a size for the first array "); scanf("%d", &n);
	int A[n];
	FillArray(A, n);
	printf("Enter a size for the secnd array "); scanf("%d", &m);
	int B[m];
	FillArray(B, m);
	int C[n + m], i = 0, j = 0, k = 0;
	while (i < n && j < m) {
		if (A[i] < B[j]) {
			C[k] = A[i]; i++;
		}
		else {
			C[k] = B[j]; j++;
		}
		k++;
	}
	while (j < m) {
		C[k] = B[j];
		k++; j++;
	}
	while (i < n) {
		C[k] = A[i];
		k++; i++;
	}

	PrintArray(C, n + m);

	return 0;
}