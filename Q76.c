#include<stdio.h>
int main(){
    int rows,cols,symmetric=1;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    int matrix[rows][cols];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if(matrix[i][j]!=matrix[j][i]){
                symmetric=0;
                break;
            }
        }
    }
    if(symmetric){
        printf("Matrix is symmetric.");
    }
    else{
        printf("Matrix is not symmetric.");
    }
    return 0;
}