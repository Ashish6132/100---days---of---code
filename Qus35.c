#include<stdio.h>
int main(){
    int number , factor;
    printf("Enter the number to find its factors:");
    scanf("%d",&number);
    printf("Factors of %d are: \n",number);
    for(factor=1; factor<=number; factor++){
        if(number%factor==0){
            printf("%d \n",factor);
        }
    }
}