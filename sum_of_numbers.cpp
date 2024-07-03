#include <iostream>

int main () {
    int n, sum;

    std::cin >> n;
    sum = 0;

    while (n != 0) {
        sum += n % 10;
        n = n / 10;
    }

    std::cout << sum;
}