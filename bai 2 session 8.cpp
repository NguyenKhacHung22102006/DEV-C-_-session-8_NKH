#include <stdio.h>
int main() {
    int n;

    printf("Nhap v�o mot so nguyen: ");
    scanf("%d", &n);

    int arr[n][n];

    printf("Nhap cac phan tu cho ma tran %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Ma tran vuong c� kich thuoc %dx%d l�:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}

