#include <iostream>
enum class Flags : unsigned char {
    A = 1, B = 2, C = 4, D = 8
};
inline Flags operator|(Flags a, Flags b) {
    return static_cast<Flags>(static_cast<unsigned char>(a) | static_cast<unsigned char>(b));
}
int main() {
    Flags f = Flags::A | Flags::C;
    unsigned char val = static_cast<unsigned char>(f);
    std::cout << (int)val << "\n";
}
