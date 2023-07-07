#ifndef JVM_STACK_HPP
#define JVM_STACK_HPP

#include <vector>
#include "frame.hpp"
#include "header.hpp"

class PilhaJVM {
private:
    std::vector<int> pilha;

public:
    PilhaJVM();

    void empilhar(int valor);
    int desempilhar();
    bool vazia() const;
    void limpar();
};

#endif // JVM_STACK_HPP