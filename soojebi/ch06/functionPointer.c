#include <stdio.h>

void fn1() {
    printf("fn1 �Լ�\n");
}

int fn2(int a) {
    printf("fn2 �Լ�: %d\n",a);
    return 0;
}

int main() {
    void(*pf1)();
    int(*pf2)(int);

    fn1();
    fn2(5);

    pf1=fn1;
    pf2=fn2;
    
    pf1();
    pf2(2);

    return 0;
}

