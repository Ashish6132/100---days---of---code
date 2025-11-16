#include<stdio.h>
int main(){
    int rows, cols,sum_of_two_matrices=0;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    int matrix1[rows][cols],matrix2[rows][cols];
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    printf("The sum of the two matrices is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum_of_two_matrices=matrix1[i][j]+matrix2[i][j];
            printf("%d ", sum_of_two_matrices);
        }
        printf("\n"); 
    }
    return 0;
}