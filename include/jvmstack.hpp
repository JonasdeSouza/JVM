#ifndef JVM_STACK_HPP
#define JVM_STACK_HPP

#include <vector>
#include "frame.hpp"
#include "header.hpp"

class stackJvm {
private:
    std::vector<int> stack;

public:
    stackJvm();

    void pushJvmStack(int value);
    int popJvmStack();
    bool empty() const;
    void clean();
};

#endif // JVM_STACK_HPP