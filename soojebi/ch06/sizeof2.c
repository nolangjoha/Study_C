#include <stdio.h>
#include <stdlib.h>

int main() {

    char a;
    int b;
    int c[10];
    int*d = c;
    int e[10][10];
    float f;
    double g;
    int*h;
    char*i = "Hello";
    h = (int*)malloc(40);

    printf("%d %d %d\n", sizeof(char), sizeof(int), sizeof(float));
    printf("%d %d %d\n", sizeof(double), sizeof(char*), sizeof(int*));
    printf("%d %d %d\n", sizeof(a), sizeof(b), sizeof(c));
    printf("%d %d %d\n", sizeof(d), sizeof(e), sizeof(f));
    printf("%d %d %d\n", sizeof(d), sizeof(e), sizeof(e[0]));
    printf("%d %d %d %d\n", sizeof(f), sizeof(g), sizeof(h), sizeof(i));

    free(h);

    return 0;
}