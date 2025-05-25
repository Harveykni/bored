#include <stdio.h>
int main() {
    int x = 42;
    while (x >>= 1)
        printf("%d\n", x);
    return 0;
}
