#include <stdio.h>
int main() {
    char s[] = {72, 101, 108, 108, 111, 0};
    char *p = s + 4;
    *p = *(p - 1);
    printf("%s\n", s);
}
