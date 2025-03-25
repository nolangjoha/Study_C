#include <stdio.h>
#include <string.h>

int main() {
    char a[20] = "Hello";
    char*p = strchr(a, 'l');
    printf("%s", p);

    return 0;
}