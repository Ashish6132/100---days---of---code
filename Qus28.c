#include<stdio.h>
int main(){
    int n,i,product=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=2;i<=n;i+=2){
        product*=i;
    }
    printf("Product of first %d even numbers is : %d",n,product);
      return 0;
}