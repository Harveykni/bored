#include <stdio.h>
int main() {
    int i = 1;
    int x = i++ + i++ + ++i;
    printf("%d\n", x);
}
