#include <stdio.h>
#include <math.h>
int main() {
    int num, firstDigit, lastDigit, digits = 0, temp, power;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    lastDigit = num % 10;
    while (temp >= 10) {
        temp = temp / 10;
        digits++;
    }
    firstDigit = temp;
    power = (int)pow(10, digits);
    if (digits == 0) {
        printf("After swapping: %d\n", num);
    } else {
        int middle = num % power / 10;
        int result = lastDigit * power + middle * 10 + firstDigit;
        printf("After swapping first and last digits: %d\n", result);
    }

    return 0;
}
