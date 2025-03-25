#include <stdio.h>
#include <ctype.h>

int main() {
    char s[5] = "Sf 2";
    int i;

    for(i=0; i<4; i++) {
        printf("%d ", isalpha(s[i]));
        printf("%d ", isupper(s[i]));
        printf("%d ", islower(s[i]));
        printf("%d ", isdigit(s[i]));
        printf("%d ", isxdigit(s[i]));
        printf("%d ", isalnum(s[i]));
        printf("\n");

    }

    printf("%c", tolower(s[0]));
    printf("%c", toupper(s[1]));
}