#include <iostream>
template<int N>
struct Fact {
    static const int value = N * Fact<N - 1>::value;
};
template<>
struct Fact<0> {
    static const int value = 1;
};
int main() {
    std::cout << Fact<5>::value << "\n";
}
