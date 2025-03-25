#include <stdio.h>

int main() {
    int a[3] = {10, 20, 30};
    const int *p1 = a+1;
    int const *p2 = a+1;
    int* const p3 = a;

    // p1[0] = 15;
    // p2[0] = 15;
    p3[0] = 15;

    p1 = a;
    p2 = a;
    // p3 = a+1;

    printf("%d %d %d", *p1, *p2, *p3);

    return 0;
}