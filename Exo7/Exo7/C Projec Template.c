#include <stdio.h>

int main() {
	int Size = 0;
	printf("Enter a size for your array "); scanf("%d", &Size);
	int A[Size], Start = 0, End = Size - 1, Mid = 0, Value = 0;
	for (int i = 0; i < Size; i++) {
		printf("Enter the value A[%d] ", i);
		scanf("%d", A + i);
	}

	printf("Enter the value you want to find "); scanf("%d", &Value);
	do {
		Mid = (End - Start) / 2 + Start;
		switch (Value > A[Mid]) {
		case 1: Start = Mid; break;
		case 0: End = Mid; break;
		}
	} while (Value != A[Mid]);

	printf("Value found at position %d", Mid);

	return 0;
}