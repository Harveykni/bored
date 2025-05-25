#include <iostream>
#include <vector>
int main() {
    std::vector<int> v = {1, 1};
    while (v.size() < 10)
        v.push_back(v[v.size()-1] + v[v.size()-2]);
    for (auto n : v)
        std::cout << n << " ";
}
