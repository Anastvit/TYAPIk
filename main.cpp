#include <iostream>
#include <vector>
#include <string>

int main() {
    int n;
    std::vector<std::string> L1, L2, L1L2;
    
    std::cout << "Введите количество цепочек в языке L1: ";
    std::cin >> n;
    L1.resize(n);
    for(int i = 0; i < n; ++i) {
        std::cout << "Введите цепочку " << i+1 << ": ";
        std::cin >> L1[i];
    }

    std::cout << "Введите количество цепочек в языке L2: ";
    std::cin >> n;
    L2.resize(n);
    for(int i = 0; i < n; ++i) {
        std::cout << "Введите цепочку " << i+1 << ": ";
        std::cin >> L2[i];
    }

    for(const auto &l1 : L1) {
        for(const auto &l2 : L2) {
            L1L2.push_back(l1 + l2);
        }
    }

    std::cout << "Цепочки языка L1L2:\n";
    for(const auto &l1l2 : L1L2) {
        std::cout << l1l2 << '\n';
    }

    return 0;
}
