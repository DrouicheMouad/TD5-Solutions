#include <stdio.h>
#include <stdbool.h>
void FillArray(int A[], int Size) {
    for (int i = 0; i < Size; i++) {
        printf("Enter A[%d]: ", i);
        scanf("%d", &A[i]);
    }
}
void PrintArray(int A[], int Size) {
    for (int i = 0; i < Size; i++) {
        printf("%3d ", A[i]);
    }
    printf("\n");
}
bool CheckAllEven(int A[], int Size) {
    for (int i = 0; i < Size; i++) {
        if (A[i] % 2 != 0)
            return 0;
    }
    return 1;
}
bool CheckDuplicates(int A[], int Size) {
    for (int i = 0; i < Size-1; i++) {
        for (int j = i + 1; j < Size; j++) {
            if (A[j] == A[i])
                return 1;
        }
    }
    return 0;
}
int main() {
    int Size;
    printf("Enter the size ");
    scanf("%d", &Size);
    int A[Size];
    FillArray(A, Size);
    PrintArray(A, Size);

    if (CheckAllEven(A, Size))
        printf("All elements are even\n");
    else
        printf("Not all elements are even\n");

    if (!CheckDuplicates(A, Size))
        printf("There are no duplicates\n");
    else
        printf("There are duplicates\n");

    return 0;

}