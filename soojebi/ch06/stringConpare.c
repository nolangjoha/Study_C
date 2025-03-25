#include <stdio.h>
#include <string.h>

int main() {
    char a[10] = "HelloA";
    char b[10] = "HelloB";

    int c = strcmp(a,b);
    printf("%d\n", c);

    c = strncmp(a, b, 3);
    printf("%d", c);

    return 0;
}