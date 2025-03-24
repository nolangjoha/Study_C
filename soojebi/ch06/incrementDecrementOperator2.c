#include <stdio.h>

int main() {
    int x=3, y=3;
    int z = x++ + ++y;
    printf("%d %d %d", x, y, z);
    
    return 0;
}