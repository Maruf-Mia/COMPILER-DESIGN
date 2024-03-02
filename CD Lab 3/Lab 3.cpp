#include <iostream>
#include <cctype>
#include <string>

bool isIdentifier(const std::string& input) {
    // Check if the input is empty
    if (input.empty()) {
        return false;
    }

    // Check the first character
    if (!isalpha(input[0]) && input[0] != '_') {
        return false;
    }

    // Check the rest of the characters
    for (size_t i = 1; i < input.length(); ++i) {
        if (!isalnum(input[i]) && input[i] != '_') {
            return false;
        }
    }

    // If all conditions pass, then it's an identifier
    return true;
}

int main() {
    std::string input;
    std::cout << "Enter an identifier: ";
    std::cin >> input;

    if (isIdentifier(input)) {
        std::cout << input << " is a valid identifier." << std::endl;
    } else {
        std::cout << input << " is not a valid identifier." << std::endl;
    }

    return 0;
}
