#include<stdio.h>
int main(){
    int i,j;
    int stars[]={1,3,4,7,4,1};
    int n= sizeof(stars)/sizeof(stars[0]);
    for(i=0;i<n;i++){
        for(j=0;j<stars[i];j++){
            printf("*");
        }
        printf("\n");
    }
}