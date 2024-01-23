#include <iostream>
#include "Char_stack.h"

int main() {
    Char_stack stack;

    std::cout << "Is stack empty? " << (stack.isEmpty() ? "Yes" : "No") << std::endl;

    stack.push('A');
    stack.push('B');
    stack.push('C');

    std::cout << "Stack size: " << stack.size() << std::endl;
    std::cout << "Top of stack: " << stack.top() << std::endl;

    while (!stack.isEmpty()) {
        std::cout << "Popped: " << stack.pop() << std::endl;
    }

    std::cout << "Is stack empty? " << (stack.isEmpty() ? "Yes" : "No") << std::endl;

    return 0;
}
