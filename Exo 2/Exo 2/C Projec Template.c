#include <stdio.h>
#include <math.h>     //
#include <stdbool.h> // included these for the 2nd methode

int main() {
	int Bin[16] = { 0 }, i = 0, n;
	scanf("%d", &n);
	while (n > 0) {
		Bin[i] = n % 2;
		n = n / 2;
		i++;
	}
	for (int j = i - 1; j >= 0; j--) {
		printf("%d", Bin[j]);

	}//Solution 2 : 


	/*int DecimalValue = 0;
	printf("Enter an unsigned decimal number "); scanf("%d", &DecimalValue);
	if (DecimalValue == 0) {
		printf("The binary value is 0\n");
	}
	else {
		int NumberOfBits = ceil(log(DecimalValue + 1) / log(2));
		printf("we need at least %d bits to represent this value", NumberOfBits);
		bool BinaryValue[NumberOfBits];
		int i = 0;
		while (DecimalValue > 0) {
			BinaryValue[i] = DecimalValue % 2;
			DecimalValue = (DecimalValue - BinaryValue[i]) / 2;
			i++;
		}
		printf("\nThe binary value is ");
		for (int j = NumberOfBits - 1; j >= 0; j--)
			printf("%d", BinaryValue[j]);
	*/
	return 0;
}