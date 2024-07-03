#include <iostream>

int main () {
    int month, year, result;
    std::cin >> month >> year;
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            result = 31;
            break;
        case 4:
        case 6:
        case 9: 
        case 11:
            result = 30;
            break;
        case 2:
            if (year % 400 == 0) {
                result = 29;
            } else if (year % 100 == 0) {
                result = 28;
            } else if (year % 4 == 0){
                result = 29;
            } else {
                result = 28;
            }
            break;
    }
    std::cout << result << "\n";
}