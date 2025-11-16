// sum of series 2/3+4/7+6/11+8/15+...n terms
#include<stdio.h>
int main(){
    int n;
    float sum=0.0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum=sum+(float)(2*i)/(4*i-1);
    }
    printf("Sum of series is : %f",sum);
    return 0;
}