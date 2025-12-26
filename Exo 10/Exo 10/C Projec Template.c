#include <stdio.h>
void FillMatrice(int n, int m, int M[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("[%d][%d]    ", i, j);
            scanf("%d", &M[i][j]);
        }
    }
}
void PrintMatrice(int n, int m, int M[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%5d", M[i][j]);
        }
        printf("\n");
    }
}
void SumOfMatrices(int n, int m, int M1[n][m], int M2[n][m], int Sum[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            Sum[i][j] = M1[i][j] + M2[i][j];
        }
    }
}
void ProductOfMatrices(int n, int m, int p, int M1[n][m], int M2[m][p], int Product[n][p]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            Product[i][j] = 0;
            for (int k = 0; k < m; k++)
                Product[i][j] += M1[i][k] * M2[k][j];
        }
    }
}
int main() {
    int n, m, p;
    /*printf("Enter the size of the matrices (Lines,Columns) ");
     scanf("%d %d",&n,&m);
     int M1[n][m], M2[n][m], Sum[n][m];
     printf("Fill the first matrice\n");
     FillMatrice(n,m,M1);
     printf("Fill the second matrice\n");
     FillMatrice(n,m,M2);
     SumOfMatrices(n,m,M1,M2,Sum);
     printf("The sum is \n");
     PrintMatrice(n,m,Sum);
     */
    printf("Enter the size of the first matrice (Lines,Columns) ");
    scanf("%d %d", &n, &m);
    printf("Enter only the number of columns of the second matrice ");
    scanf("%d", &p);
    int M1[n][m], M2[m][p], Product[n][p];
    printf("Fill the first matrice\n");
    FillMatrice(n, m, M1);
    printf("Fill the second matrice\n");
    FillMatrice(m, p, M2);
    printf("The product is \n");
    ProductOfMatrices(n, m, p, M1, M2, Product);
    PrintMatrice(n, p, Product);
    return 0;
}