#include <stdio.h>

int a = 5;
void fn() {
    a = a+3;
}

int main() {
    a = a+5; //10
    fn();   //13
    printf("%d", a); //13

    return 0;
}