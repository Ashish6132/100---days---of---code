#include<stdio.h>
int main(){
    int Number,product_of_odd_digit=1,remainder;
    printf("Enter a number:");
    scanf("%d",&Number);
    while(Number!=0){
        remainder=Number%10;
        if(remainder%2!=0){
            product_of_odd_digit=product_of_odd_digit*remainder;
        }
        Number=Number/10;
        printf("Product of odd digit is : %d",product_of_odd_digit);
    return 0;
    }
}