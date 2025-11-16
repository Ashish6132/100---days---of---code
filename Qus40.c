#include<stdio.h>
int main(){
    int binary_num,complement=0,remainder,base=1;
    printf("Enter a binary number:");
    scanf("%d",&binary_num);
    while(binary_num!=0){
        remainder=binary_num%10;
        if(remainder==0){
            complement=complement+1*base;
        }
        binary_num=binary_num/10;
        base=base*10;
    }
    printf("Complement of binary number is : %d\n",complement);
    return 0;
}