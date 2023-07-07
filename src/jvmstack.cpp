#include "../include/jvmstack.hpp"

PilhaJVM::PilhaJVM() {}

void PilhaJVM::empilhar(int valor) {
    pilha.push_back(valor);
}

int PilhaJVM::desempilhar() {
    int valor = pilha.back(); 
    pilha.pop_back();
    return valor;
}

bool PilhaJVM::vazia() const {
    return pilha.empty();
}

void PilhaJVM::limpar() {
    pilha.clear();
}