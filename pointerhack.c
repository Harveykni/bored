#include <stdio.h>
int main() {
    char *s = "ABCD";
    ((char*)s)[1] = 'Z';
    printf("%s\n", s);
}
