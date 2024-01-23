#ifndef BRACKETS_H
#define BRACKETS_H

#include <string>

class Brackets {
private:
    int errorPosition;

    bool isOpeningBracket(char ch);
    bool isClosingBracket(char ch);
    bool isMatchingPair(char open, char close);

public:
    Brackets();

    bool checkBrackets(const std::string& str);
    int getErrorPosition() const;

    ~Brackets();
};

#endif
