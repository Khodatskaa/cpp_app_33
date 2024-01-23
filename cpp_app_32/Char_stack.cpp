#include "char_stack.h"

CharStack::CharStack(int size) {
    capacity = size;
    array = new char[capacity];
    topIndex = -1;
}

void CharStack::push(char c) {
    if (topIndex == capacity - 1) {
        resize(capacity * 2);  
    }
    array[++topIndex] = c;
}

char CharStack::pop() {
    if (!isEmpty()) {
        char popped = array[topIndex--];
        if (topIndex < capacity / 2 && capacity > 2) {
            resize(capacity / 2);
        }
        return popped;
    }
    else {
        return '\0';
    }
}

int CharStack::size() const {
    return topIndex + 1;
}

bool CharStack::isEmpty() const {
    return topIndex == -1;
}

void CharStack::clear() {
    topIndex = -1;
}

char CharStack::top() const {
    if (!isEmpty()) {
        return array[topIndex];
    }
    else {
        return '\0';
    }
}

void CharStack::resize(int newSize) {
    char* newArray = new char[newSize];
    for (int i = 0; i <= topIndex; ++i) {
        newArray[i] = array[i];
    }
    delete[] array;
    array = newArray;
    capacity = newSize;
}

CharStack::~CharStack() {
    delete[] array;
}