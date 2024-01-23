#include <iostream>
#include "Brackets.h"

int main() {
    std::string input;
    std::cout << "Enter the string: ";
    std::getline(std::cin, input);

    Brackets bracketChecker;
    if (bracketChecker.checkBrackets(input)) {
        std::cout << "The string has correct bracket placement.\n";
    }
    else {
        std::cout << "Incorrect bracket placement at position: " << bracketChecker.getErrorPosition() << "\n";
    }

    return 0;
}
