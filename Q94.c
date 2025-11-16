#include <stdio.h>
#include <string.h>
#define MAX 100
int main() {
    char str[MAX];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; 
    char longestWord[MAX] = "";
    char currentWord[MAX] = "";
    int maxLength = 0, currentLength = 0;
    for (int i = 0; ; i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            currentWord[currentLength++] = str[i];
        } else {
            if (currentLength > maxLength) {
                currentWord[currentLength] = '\0';
                strcpy(longestWord, currentWord);
                maxLength = currentLength;
            }
            currentLength = 0;
        }
        if (str[i] == '\0') {
            break;
        }
    }
    printf("The longest word is: %s\n", longestWord);
    return 0;
}