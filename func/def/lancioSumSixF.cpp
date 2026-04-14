#include "../call/lancioSumSixF.h"

int lancioSumSixF() {
    Dado dado;

    return (1 + ( std::rand() % ( dado.faces ))) + (1 + ( std::rand() % ( dado.faces )));
}

