#ifndef frame_h
#define frame_h

// Libs locais
// Libs locais
#include "header.h"

class RegistroPC {
private:
    int pc;

public:
    RegistroPC();

    void incrementar();
    int getPC() const;
    void setPC(int valor);
};
