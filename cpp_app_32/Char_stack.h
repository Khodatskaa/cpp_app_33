#ifndef Char_stack_h
#define Char_stack_h

#include <iostream>

class Char_stack {
private:
    int capacity;
    char* array;
    int topIndex;

public:
    Char_stack();

    void push(char c);
    char pop();
    int size() const;
    bool isEmpty() const;
    bool isFull() const;
    void clear();
    char top() const;

    ~Char_stack();
};

#endif 
