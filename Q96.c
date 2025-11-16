//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>
#define MAX 100
void reverseWord(char* start, char* end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main() {
    char str[MAX];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; 
    int n = strlen(str);
    int start = 0;
    for (int i = 0; i <= n; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverseWord(&str[start], &str[i - 1]);
            start = i + 1;
        }
    }
    printf("Modified sentence: %s\n", str);
    return 0;
}
