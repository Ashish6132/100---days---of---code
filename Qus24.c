#include<stdio.h>
int main(){
    int  electric_bill;
    printf("Enter the number of units consumed:");
    scanf("%d",&electric_bill);
    if(electric_bill <= 100){
        printf("charge is :%d",(electric_bill * 5));
    }
    else if(electric_bill <= 200){
        printf("Charge is : %d", (electric_bill - 100) * 7);
    }
    else if(electric_bill <= 300){
        printf("Charge is : %d", (100 * 5) + ((electric_bill - 200) * 10));
    }
    else{
        printf("Charge is : %d", (100 * 5) + (100 * 10) + ((electric_bill - 300) * 12));
    }
    return 0;
}
