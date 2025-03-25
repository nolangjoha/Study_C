#include <stdio.h>
#include <string.h>

int main() {
    char a[20] = "Hello";
    char b[10] = "Soojebi";
    char c[20] = "Hello";

    strcpy(a,b);
    printf("%s %s\n", a,b);

    strncpy(c, b, 3);
    printf("%s %s\n", c, b);
    
    return 0;
}
