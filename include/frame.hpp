#ifndef frame_h
#define frame_h

// Libs locais
// Libs locais
#include "header.h"

class pcRegister {
private:
    int pc;

public:
    pcRegister();

    void increment();
    int getPC() const;
    void setPC(int value);
};
