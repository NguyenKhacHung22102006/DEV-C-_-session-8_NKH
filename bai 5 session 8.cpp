#include <stdio.h>
int main() {
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int rows = 4;  
    int cols = 4;  
    int sum = 0;

    for (int i = 0; i < rows; i++) {
        sum += arr[i][0]; 
        sum += arr[i][cols - 1]; 
    }
    for (int j = 1; j < cols - 1; j++) {
        sum += arr[0][j]; 
        sum += arr[rows - 1][j]; 
    }

    printf("Tong cac phan tu tren duong bien cua ma tran la: %d\n", sum);

    return 0;
}


