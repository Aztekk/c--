#include <iostream>

int main () {
    long int x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;
    long int diff_1 = std::abs(x1 - x2), diff_2 = std::abs(y1 - y2);
    if (x1 == x2) {
        std::cout << "YES\n";
    } else if (y1 == y2) {
        std::cout << "YES\n";
    } else if (diff_1 == diff_2) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    };
}