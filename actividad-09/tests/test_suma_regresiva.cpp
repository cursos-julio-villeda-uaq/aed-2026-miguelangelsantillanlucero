#include <cassert>
#include "suma_regresiva.hpp"

int main() {
    assert(sumaIterativa(0) == 0);
    assert(sumaRecursiva(0) == 0);
    assert(sumaIterativa(1) == 1);
    assert(sumaRecursiva(1) == 1);
    assert(sumaIterativa(5) == 15);
    assert(sumaRecursiva(5) == 15);
    assert(sumaIterativa(10) == 55);
    assert(sumaRecursiva(10) == 55);
    assert(sumaIterativa(100) == 5050);
    assert(sumaRecursiva(100) == 5050);
    assert(sumaIterativa(1000) == 500500);
    assert(sumaRecursiva(1000) == 500500);
    for (unsigned int n = 0; n <= 100; ++n) assert(sumaIterativa(n) == sumaRecursiva(n));
    return 0;
}
