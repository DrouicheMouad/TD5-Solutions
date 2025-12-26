#include <stdio.h>
#include <stdbool.h>
void FillArray(int A[], int Size) {
	for (int i = 0; i < Size; i++) {
		printf("Enter the value A[%d] ", i);
		scanf("%d", &A[i]);
	}
}
bool CheckPalindrome(int A[], int Size) {
	for (int j = 0; j < Size / 2; j++) {
		if (A[j] != A[Size - 1 - j])
			return 0;
	}
	return 1;
}
int main() {
	int Size = 0;
	printf("Enter a size for your array "); scanf("%d", &Size);
	int A[Size];
	FillArray(A, Size);
	if (CheckPalindrome(A, Size)) 
		printf("This array is palindrome");
	
	else 
		printf("This array is not palindrome");
	return 0;
}