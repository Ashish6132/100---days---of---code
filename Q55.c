#include<stdio.h>
int main(){
    int n,i,j,prime;
    printf("enter number :");
    scanf("%d",&n);
    printf("prime number from 1 to %d are :\n",n);
    for(i=2;i<=n;i++){
        prime=1;
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                prime=0;
                break;
            }
        }
        if(prime==1){
            printf("%d",i);
        }
    }
    return 0;
}