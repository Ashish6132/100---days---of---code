#include<stdio.h>
int main(){
    int columns,rows,multiplication_of_matrices=1;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &columns);
    int matrix1[rows][columns],matrix2[rows][columns],result[rows
][columns];
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            result[i][j]=matrix1[i][j]*matrix2[i][j];
        }
    }
    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
