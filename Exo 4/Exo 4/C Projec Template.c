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
	int Size ;
	printf("Enter a size for your array "); scanf("%d", &Size);
	int A[Size];
	FillArray(A, Size);
	int Temp = 0, k;
	for (int j = 0; j < Size; j++) {
		if (A[j] != 0 ) {
		    k=1;
			while((j-k)>=0 && (A[j-k]==0)){
				Temp = A[j-k+1];
				A[j-k+1] = A[j-k];
				A[j-k] = Temp;
				k++;
			}
		}
	}

	printf("Zero elements shifted");
	PrintArray(A, Size);
	return 0;
}
/*
int main() {
	int Size;
	printf("Enter a size for your array "); scanf("%d", &Size);
	int A[Size];
	FillArray(A, Size);
	int ZeroesBefore = 0, Temp = 0;
	for (int j = 0; j < Size; j++) {
		if (A[j] == 0)
			ZeroesBefore++;
		else if (A[j] != 0 && ZeroesBefore != 0) {
			for (int k = 1; k <= ZeroesBefore; k++) {
				Temp = A[j - k + 1];
				A[j - k + 1] = A[j - k];
				A[j - k] = Temp;
			}
			ZeroesBefore = 0;
			j = 0;
		}
	}

	printf("Zero elements shifted");
	PrintArray(A, Size);
	return 0;
}
*/

/*

int main() {
	int j = 0, temp;
	for (int i = 0; i < Size; i++) {
		if (A[i] != 0) {
			temp = A[i];
			A[i] = A[j];
			A[j] = temp;
			j++;
		}
	}
}
*/

//ANOTHER IDEA 
