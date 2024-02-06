#include <iostream>
#include <string>

bool isComment(const std::string& input) {

    return (input.find("//") == 0);
}

int main() {
    std::string input;

    std::cout << "Enter input line: ";
    std::getline(std::cin, input);

    if (isComment(input)) {
        std::cout << "Input line is a comment." << std::endl;
    } else {
        std::cout << "Input line is not a comment." << std::endl;
    }

    return 0;
}
