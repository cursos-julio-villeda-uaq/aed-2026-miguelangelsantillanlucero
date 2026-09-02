#include <iostream>
#include "suma_regresiva.hpp"

int main() {
    unsigned int n{};
    std::cout << "Ingresa un entero no negativo: ";
    std::cin >> n;
    std::cout << "Resultado iterativo: " << sumaIterativa(n) << '\n';
    std::cout << "Resultado recursivo: " << sumaRecursiva(n) << '\n';
    return 0;
}
