//Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main() {
    int a[10][10], n, sum = 0;
    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) 
            scanf("%d", &a[i][j]);
    }
    for (int i = 0; i < n; i++) 
        sum += a[i][i];
    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}
