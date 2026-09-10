#include <stdio.h>
#include <ctype.h>
void main() {
    char ch, ch1;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if(isalpha(ch)) {
    ch1 = tolower(ch);
    switch(ch1) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a Vowel", ch);
            break;
        default:
            printf("%c is a Consonant", ch);
    }
} else {
    printf("Invalid Input");
}
}