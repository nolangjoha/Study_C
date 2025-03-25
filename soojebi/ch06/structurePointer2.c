#include <stdio.h>

struct Student{
    char gender;
    int age;
};

int main() {
    struct Student s[3] = {'F', 21,'M', 20,'M', 24};
    struct Student *p = &s;

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