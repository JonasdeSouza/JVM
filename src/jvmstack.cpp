#include "../include/jvmstack.hpp"

stackJvm::stackJvm() {}

void stackJvm::pushJvmStack(int value) {
    stack.push_back(value);
}

int stackJvm::popJvmStack() {
    int value = stack.back(); 
    stack.pop_back();
    return value;
}

bool stackJvm::empty() const {
    return stack.empty();
}

void stackJvm::clean() {
    stack.clear();
}