#include <stdio.h>
int main() {
    char *s = "Hello";
    while (*s)
        printf("%c\n", *s++);
}
