#include <stdio.h>

int main() {
    int a = 10;
    int* b = &a;
    printf("%d %d %d ", a, *b, *(&a));


}