#ifndef CHAR_STACK_H
#define CHAR_STACK_H

#include <iostream>

class CharStack {
private:
    int capacity;
    char* array;
    int topIndex;

    void resize(int newSize);

public:
    CharStack(int size);
    ~CharStack();

    void push(char c);
    char pop();
    int size() const;
    bool isEmpty() const;
    void clear();
    char top() const;

};

#endif 
