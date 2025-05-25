#include <stdio.h>
int main() {
    unsigned char x = 0b10101101;
    int c = 0;
    for (; x; x &= x - 1) c++;
    printf("%d\n", c);
}
