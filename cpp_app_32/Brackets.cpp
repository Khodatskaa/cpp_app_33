#include "Brackets.h"
#include <stack>

Brackets::Brackets() {
    errorPosition = -1;
}

bool Brackets::isOpeningBracket(char ch) {
    return (ch == '(' || ch == '{' || ch == '[');
}

bool Brackets::isClosingBracket(char ch) {
    return (ch == ')' || ch == '}' || ch == ']');
}

bool Brackets::isMatchingPair(char open, char close) {
    if (open == '(' && close == ')') {
        return true;
    }
    else if (open == '{' && close == '}') {
        return true;
    }
    else if (open == '[' && close == ']') {
        return true;
    }
    else {
        return false;
    }
}

bool Brackets::checkBrackets(const std::string& str) {
    std::stack<char> bracketStack;

    for (int i = 0; i < str.length(); ++i) {
        char currentChar = str[i];

        if (isOpeningBracket(currentChar)) {
            bracketStack.push(currentChar);
        }
        else if (isClosingBracket(currentChar)) {
            if (bracketStack.empty() || !isMatchingPair(bracketStack.top(), currentChar)) {
                errorPosition = i;
                return false;
            }
            bracketStack.pop();
        }
    }

    if (!bracketStack.empty()) {
        errorPosition = str.length() - 1;
        return false;
    }

    return true;
}

int Brackets::getErrorPosition() const {
    return errorPosition;
}

Brackets::~Brackets() {
}
