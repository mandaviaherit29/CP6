#include <stdio.h>

int main()
{
    int a[2][2], b[2][2], i, j, k, sum;

    printf("Enter first matrix (4 elements):\n");
    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix (4 elements):\n");
    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            scanf("%d", &b[i][j]);

    printf("Addition:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++)
            printf("%d ", a[i][j] + b[i][j]);
        printf("\n");
    }

    printf("Subtraction:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++)
            printf("%d ", a[i][j] - b[i][j]);
        printf("\n");
    }

    printf("Multiplication:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            sum = 0;
            for(k = 0; k < 2; k++)
                sum += a[i][k] * b[k][j];
            printf("%d ", sum);
        }
        printf("\n");
    }

    return 0;
}
