 #include<stdio.h>
int main(){
    int i,j,rows;
    printf("enter number :");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(j=1;j<=(2*i-1);j++){
            printf("*\n");
        }
        printf("\n");
    }
    for(i=rows-1;i>=1;i--){
        for(j=1;j<=(2*i-1);j++){
            printf("*\n");
        }
        printf("\n");
    }
    return 0;
}