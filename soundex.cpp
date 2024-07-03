#include <iostream>
#include <string>

std::string soundex (std::string text) {
    std::string result;

    for (int c = 0; c <= text.size(); ++c) {
        if (c == 0) {
            result += text[c];
        } else if (text[c] == 'a' || 
                   text[c] == 'e' || 
                   text[c] == 'h' || 
                   text[c] == 'i' || 
                   text[c] == 'o' || 
                   text[c] == 'u' || 
                   text[c] == 'w' || 
                   text[c] == 'y') {
            continue;
        } else if (text[c] == 'b' || 
                   text[c] == 'f' || 
                   text[c] == 'p' || 
                   text[c] == 'v') {
            if (result[result.size() - 1] == '1'){
                continue;
            } else {
            result += '1';
            }
        } else if (text[c] == 'c' || 
                   text[c] == 'g' || 
                   text[c] == 'j' || 
                   text[c] == 'k' || 
                   text[c] == 'q' || 
                   text[c] == 's' || 
                   text[c] == 'x' || 
                   text[c] == 'z') {
            if (result[result.size() - 1] == '2'){
                continue;
            } else {
            result += '2';
            }
        } else if (text[c] == 'd' || 
                   text[c] == 't') {
            if (result[result.size() - 1] == '3'){
                continue;
            } else {
            result += '3';
            }
        } else if (text[c] == 'l') {
            if (result[result.size() - 1] == '4'){
                continue;
            } else {
            result += '4';
            }
        } else if (text[c] == 'm' || 
                   text[c] == 'n') {
            if (result[result.size() - 1] == '5'){
                continue;
            } else {
            result += '5';
            }
        } else if (text[c] == 'r') {
            if (result[result.size() - 1] == '6'){
                continue;
            } else {
            result += '6';
            }
        }
    }

    if (result.size() < 4) {
        for (int c = 0; c <= 4 - result.size(); c++) {
            result += '0';
        }
    } else {
        result = result.substr(0, 4);
    }

    return result;

}

int main() {
    std::string incoming_text;
    std::cin >> incoming_text;

    std::cout << soundex(incoming_text);

    return 0;
}