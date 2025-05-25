#include <stdio.h>
union U {
    int i;
    float f;
};
int main() {
    union U u;
    u.i = 0x40490fdb;
    printf("%f\n", u.f);
}
