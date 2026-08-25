#include <iostream>

#include "algorithms.hpp"

int main() {
    if (aed::sum(2, 3) != 5) {
        std::cerr << "Fallo: sum(2, 3) debe devolver 5.\n";
        return 1;
    }

    if (aed::sum(-4, 4) != 0) {
        std::cerr << "Fallo: sum(-4, 4) debe devolver 0.\n";
        return 1;
    }

    std::cout << "Todas las pruebas pasaron.\n";
    return 0;
}
