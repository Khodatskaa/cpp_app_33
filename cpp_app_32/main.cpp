#include "char_stack.h"

int main() {
    CharStack stack(5);

    std::cout << "Is stack empty? " << (stack.isEmpty() ? "Yes" : "No") << std::endl;

    stack.push('A');
    stack.push('B');
    stack.push('C');

    std::cout << "Stack size: " << stack.size() << std::endl;
    std::cout << "Top of stack: " << stack.top() << std::endl;

    stack.push('D');
    stack.push('E');

    std::cout << "Stack size: " << stack.size() << std::endl;

    stack.push('F');
    stack.push('G');

    std::cout << "Stack size after resizing: " << stack.size() << std::endl;

    while (!stack.isEmpty()) {
        std::cout << "Popped: " << stack.pop() << std::endl;
    }

    std::cout << "Is stack empty? " << (stack.isEmpty() ? "Yes" : "No") << std::endl;

    return 0;
}
