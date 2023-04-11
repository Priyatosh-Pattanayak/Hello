#include <stdio.h>
#include <string.h>

int main() {
    char vow[] = "AEIOU";
    char alphabet = 'A';

    for (int i = 0; i < 26; i++) {
        if (strchr(vow, alphabet)) {
            printf("%c is vowel\n", alphabet);
        } else {
            printf("%c is consonant\n", alphabet);
        }
        alphabet++;
    }

    return 0;
}

