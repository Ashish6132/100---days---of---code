#include<stdio.h>
int main(){
    int rows,cols,diagonal_of_matrix_disttict=1;
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
            if(i==j){
                for(int k=j+1;k<cols;k++){
                    if(matrix[i][j]==matrix[i][k]){
                        diagonal_of_matrix_disttict=0;
                        break;
                    }
                }
            }
        }
    }
    if(diagonal_of_matrix_disttict){
        printf("Diagonal of matrix is disttict.");
    }
    else{
        printf("Diagonal of matrix is not disttict.");
    }
    return 0;
}