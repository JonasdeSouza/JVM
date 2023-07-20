#ifndef frame_hpp
#define frame_hpp
#endif

// Libs locais
// Libs locais
#include "header.hpp"

class pcRegister {
private:
    int pc;

public:
    pcRegister();

    void increment();
    int getPC() const;
    void setPC(int value);
};
