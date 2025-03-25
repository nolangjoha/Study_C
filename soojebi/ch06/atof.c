#include <stdio.h>
#include <stdlib.h>

int main() {
    char buffer[4];
    int num = 123;
    itoa(num, buffer, 10);

    printf("%s", buffer);
    
    return 0;
}