#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(0x0));  // seed with 0
            printf("[");
    for (int i = 0; i < 100; i++) {

        printf("%d,", (rand() & 100) * 8);  // predict and print the next values

    }
            printf("]");
    return 0;
}
