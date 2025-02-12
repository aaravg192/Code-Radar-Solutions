#include <stdio.h>

char *checkCharacter(char ch) {
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        return (ch | 32) == 'a' || (ch | 32) == 'e' || (ch | 32) == 'i' || (ch | 32) == 'o' || (ch | 32) == 'u' ? "Vowel" : "Consonant";
    else if (ch >= '0' && ch <= '9')
        return "Digit";
    else
        return "Special character";
}

int main() {
    char ch;
    scanf("%c", &ch);
    printf("%s\n", checkCharacter(ch));
    return 0;
}
