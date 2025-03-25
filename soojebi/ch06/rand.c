#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a;
    int i;

    // srand(time(NULL));
    
    for(i=0; i<6; i++){
        a = rand() % 45 +1;
        printf("%d, ", a);
    }

    return 0;
}