#include<stdio.h>
int main(){
    int rows,columns,sum_of_diagonal_elements=0;
    printf("Enter number of rows: ");   
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &columns);
    int matrix[rows][columns];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if(i==j){
                sum_of_diagonal_elements=sum_of_diagonal_elements+matrix[i][j];
            }
        }
    }
    printf("Sum of diagonal elements is : %d",sum_of_diagonal_elements);
    return 0;
}