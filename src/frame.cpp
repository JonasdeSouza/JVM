#include <../include/frame.hpp>

RegistroPC::RegistroPC() : pc(0) {}

void RegistroPC::incrementar() {
    pc++;
}

int RegistroPC::getPC() const {
    return pc;
}

void RegistroPC::setPC(int valor) {
    pc = valor;
}