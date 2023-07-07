#include <../include/frame.hpp>

pcRegister::pcRegister() : pc(0) {}

void pcRegister::increment() {
    pc++;
}

int pcRegister::getPC() const {
    return pc;
}

void pcRegister::setPC(int value) {
    pc = value;
}