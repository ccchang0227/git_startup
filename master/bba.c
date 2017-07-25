#include <stdio.h>

int main(void) {
    printf("Hello, and good-bye!\n");
    
    // 9x9 multiply
    int i;
    for (i = 1; i <= 9; i ++) {
        int j;
        for (j = 1; j <= 9; j ++) {
            printf("%dx%d=%d ", i, j, (i*j));
        }
        printf("\n");
    }

    return 0;
}
