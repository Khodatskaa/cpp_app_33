#include "Char_stack.h"

Char_stack::Char_stack() {
	capacity = 10;
	array = new char[capacity];
	topIndex = -1;
}

void Char_stack::push(char c) {
	if (isFull()) {
		std::cout << "Stack is full. Cannot push " << c << std::endl;
		return;
	}
	topIndex++;
	array[topIndex] = c;
}

char Char_stack::pop() {
	if (isEmpty()) {
		std::cout << "Stack is empty. Cannot pop." << std::endl;
		return '\0';
	}
	char c = array[topIndex];
	topIndex--;
	return c;
}

int Char_stack::size() const {
	return topIndex + 1;
}

bool Char_stack::isEmpty() const {
	return topIndex == -1;
}

bool Char_stack::isFull() const {
	return topIndex == capacity - 1;
}

void Char_stack::clear() {
	topIndex = -1;
}

char Char_stack::top() const {
	if (isEmpty()) {
		std::cout << "Stack is empty. Cannot return top." << std::endl;
		return '\0';
	}
	return array[topIndex];
}

Char_stack::~Char_stack() {
	delete[] array;
}
