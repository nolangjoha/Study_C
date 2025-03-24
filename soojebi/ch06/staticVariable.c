#include <stdio.h>

void fn() {
    static int a = 3;
    a = a+1;    //4
    printf("%d\n", a); //4
}

int main() {
    fn();   //4
    fn();   //4

    return 0;
}