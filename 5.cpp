#include <iostream>
class A {
public:
    A() { std::cout << "A"; }
    ~A() { std::cout << "B"; }
};
int main() {
    A a;
    {
        A b;
    }
}
