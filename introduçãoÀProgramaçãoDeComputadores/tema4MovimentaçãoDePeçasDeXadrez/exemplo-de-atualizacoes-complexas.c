#include <stdio.h>

int main() {

    for (int i = 0;
        i < 100;
        i += (i % 2 == 0) ? 1 : 2)
    {
        printf("%d\n", i);
    }

    return 0;
}