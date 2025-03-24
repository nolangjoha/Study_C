#include <stdio.h>

union Student {
    int id;
    int age;
};

int main() {
    union Student s = {.age=20};
    printf("%d %d\n", s.id, s.age);

    s.id=2000;
    printf("%d %d\n", s.id, s.age);

    s.age = 19;
    printf("%d %d\n", s.id, s.age);

    return 0;
}