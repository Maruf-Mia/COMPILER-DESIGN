#include <iostream>
#include <cctype>

bool isNumericConstant(const std::string& input) {
    for (char ch : input) {
        if (!isdigit(ch)) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string input;


    std::cout << "Enter a value: ";
    std::cin >> input;


    if (isNumericConstant(input)) {
        std::cout << "Numeric constant\n";
    } else {
        std::cout << "Not numeric\n";
    }

    return 0;
}
