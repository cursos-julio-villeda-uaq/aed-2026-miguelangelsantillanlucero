#include <cmath>
#include <iostream>
#include <stdexcept>
#include <vector>

#include "promedio.hpp"

namespace {

bool cerca(const double actual, const double esperado) {
    return std::abs(actual - esperado) < 1e-6;
}

int fallar(const char* mensaje) {
    std::cerr << mensaje << '\n';
    return 1;
}

}  // namespace

int main() {
    if (!cerca(aed::calcularSuma({8.0, 9.0, 10.0}), 27.0)) {
        return fallar("La suma de tres calificaciones es incorrecta.");
    }
    if (!cerca(aed::calcularPromedio({8.0, 9.0, 10.0}), 9.0)) {
        return fallar("El promedio de tres calificaciones es incorrecto.");
    }
    if (!cerca(aed::calcularPromedio({7.5, 8.25, 9.0}), 8.25)) {
        return fallar("El promedio decimal es incorrecto.");
    }
    if (!cerca(aed::calcularPromedio({10.0}), 10.0)) {
        return fallar("El caso de un solo elemento es incorrecto.");
    }
    if (!cerca(aed::calcularSuma({}), 0.0)) {
        return fallar("La suma de un vector vacío debe ser cero.");
    }

    try {
        static_cast<void>(aed::calcularPromedio({}));
        return fallar("Un vector vacío debe lanzar std::invalid_argument.");
    } catch (const std::invalid_argument&) {
        // Comportamiento esperado.
    }

    std::cout << "Todas las pruebas visibles pasaron.\n";
    return 0;
}

