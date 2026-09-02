#include <iostream>
#include "suma_regresiva.hpp"

bool verificar(unsigned int n, long long esperado) {
    const auto iterativo = sumaIterativa(n);
    const auto recursivo = sumaRecursiva(n);
    if (iterativo != esperado || recursivo != esperado || iterativo != recursivo) {
        std::cerr << "Fallo para n=" << n
                  << ": esperado=" << esperado
                  << ", iterativo=" << iterativo
                  << ", recursivo=" << recursivo << '\n';
        return false;
    }
    return true;
}

int main() {
    bool correcto = true;
    correcto &= verificar(0, 0);
    correcto &= verificar(1, 1);
    correcto &= verificar(5, 15);
    correcto &= verificar(10, 55);
    correcto &= verificar(100, 5050);
    correcto &= verificar(1000, 500500);
    for (unsigned int n = 0; n <= 100; ++n) {
        const long long esperado = static_cast<long long>(n) * (n + 1) / 2;
        correcto &= verificar(n, esperado);
    }
    return correcto ? 0 : 1;
}
