#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char tmp[10];
    char*p[2];
    int i;

    for(i=0; i<2; i++) {
        scanf("%s", tmp);
        p[i]=(char*)malloc(sizeof(char)*(strlen(tmp)+1));
        strcpy(p[i], tmp);
    }

    for(i=1; i>=0; i--) {
        printf("%s\n", p[i]);
        free(p[i]);
    }

    return 0;
}