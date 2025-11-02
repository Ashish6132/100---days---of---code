#include<stdio.h>
int main(){
    char ch;
    printf("Enter the character :");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("The character is Uppercase letter");
    }
    else if(ch>='a' && ch<='z'){
        printf("The character is Lowercase letter");
    }
    else if(ch>='0' && ch<='9'){
        printf("The character is Digit");
    }
    else{
        printf("The character is Special character");
    }
}
