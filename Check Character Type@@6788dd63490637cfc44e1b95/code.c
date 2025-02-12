#include <stdio.h>

char *checkCharacter(char ch) {
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        return (ch | 32) == 'a' || (ch | 32) == 'e' || (ch | 32) == 'i' || (ch | 32) == 'o' || (ch | 32) == 'u' ? "vowel" : "consonant";
    else if (ch >= '0' && ch <= '9')
        return "digit";
    else
        return "special character";
}

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("'%c' is a %s.\n", ch, checkCharacter(ch));
    return 0;
}
