#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int n;
    int i, j;

    if (argc < 2) {
        n = 9;
    } else {
        n = atoi(argv[1]);
    }

    printf("     ");
    for (i = 1; i <= n; i++) {
       printf("%4d ", i); 
    }
    printf("\n");

    for (i = 1; i <= n; i++) {
        printf("%4d ", i);
        for (j = 1; j <= n; j++) {
            printf("%4d ", i * j);
        }
        printf("\n");
    }
    return 0;
}
