#include <stdio.h>

typedef struct Student{
    char gender;
    int age;
} S;

int main() {
    S s[3] = {'F', 21,'M', 20,'M', 24};
    S *p = &s;

    printf("%c %d\n", s[0].gender, s[0].age);
    printf("%c %d\n", s[0].gender, s[0].age);
    printf("%c %d\n", s[0].gender, s[0].age);
    printf("%c %d\n", s[0].gender, s[0].age);
    printf("%c %d\n", s[0].gender, s[0].age);
    printf("%c %d\n", s[0].gender, s[0].age);
    printf("%c %d\n", s[0].gender, s[0].age);
    printf("%c %d\n", s[0].gender, s[0].age);
    printf("%c %d\n", s[0].gender, s[0].age);


    return 0;
}