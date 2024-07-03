#include <iostream>

int main () {
    int a, b, c;

    std::cin >> a >> b >> c;

    if (a > b + c || b > a + c || c > a + b) {
        std::cout << "UNDEFINED\n";
    } else if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
}