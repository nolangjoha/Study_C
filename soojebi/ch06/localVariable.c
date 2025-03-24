#include <stdio.h>

int main() {
    int a = 3 , b = 4;
    {
        int a = 5;
        printf("%d %d\n", a,b);   //5 4
    }

    printf("%d %d\n", a, b);   // 3  4

    return 0;
}

