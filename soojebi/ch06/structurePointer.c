#include <stdio.h>

struct Student{
    char gender;
    int age;
};

int main() {
    struct Student s = {'F', 21};
    struct Student *p = &s;

    printf("%c %d\n", s.gender, s.age);
    printf("%c %d\n", (&s)->gender, (&s)->age);
    printf("%c %d\n", p->gender, p->age);
    printf("%c %d\n", (*p).gender, (*p).age);
    printf("%c %d\n", p[0].gender, p[0].age);

    return 0;
}