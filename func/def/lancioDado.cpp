#include "../call/lancioDado.h"

int lancioDado(Dado dado) {
    return (1 + ( std::rand() % ( dado.faces )));
}