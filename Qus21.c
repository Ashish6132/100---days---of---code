#include<stdio.h>
int main(){
    int month;
    printf("Enter month number (1-12):");
    scanf("%d",&month);
    switch(month){
        case 1:
            printf("January\n");
            printf("31 days");
            break;
        case 2:
            printf("February\n");
            printf("28 or 29 days");
            break;
        case 3:
            printf("March\n");
            printf("31 days");
            break;
        case 4:
            printf("April\n");
            printf("30 days");
            break;
        case 5:
            printf("May\n");  
            printf("31 days");
            break;
        case 6:
            printf("June\n");
            printf("30 days");
            break;
        case 7:
            printf("July\n");
            printf("31 days");
            break;
        case 8:
            printf("August\n");
            printf("31 days");
            break;
        case 9:
            printf("September\n");
            printf("30 days");
            break;
        case 10:
            printf("October\n");
            printf("31 days");
            break;
        case 11:
            printf("November\n");
            printf("30 days");
            break;
        case 12:
            printf("December\n");
            printf("31 days");
            break;
        default:
            printf("Invalid month number! Please enter a number between 1 and 12.");
    }
}