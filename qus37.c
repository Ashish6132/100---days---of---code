#include<stdio.h>
int main(){
    int num1,num2,i,Lcm;
    printf("Enter two numbers:");
    scanf("%d %d",&num1,&num2);
    for(i=1;i<=num1*num2;i++){
        if(i%num1==0 && i%num2==0){
            Lcm=i;
            break;
        }
    }
}