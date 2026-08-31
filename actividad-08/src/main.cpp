#include <iostream>
#include <vector>

#include "promedio.hpp"

int main() {
    std::size_t cantidad = 0;
    std::cout << "Cantidad de calificaciones: ";
    std::cin >> cantidad;

    if (!std::cin || cantidad == 0) {
        std::cerr << "La cantidad debe ser mayor que cero.\n";
        return 1;
    }

    std::vector<double> calificaciones;
    calificaciones.reserve(cantidad);

    for (std::size_t i = 0; i < cantidad; ++i) {
        double valor = 0.0;
        std::cout << "Calificación " << (i + 1) << ": ";
        std::cin >> valor;
        if (!std::cin) {
            std::cerr << "Calificación inválida.\n";
            return 1;
        }
        calificaciones.push_back(valor);
    }

    std::cout << "Cantidad capturada: " << calificaciones.size() << '\n';
    std::cout << "Calificaciones:";
    for (double calificacion : calificaciones) {
        std::cout << ' ' << calificacion;
    }
    std::cout << '\n';
    std::cout << "Suma: " << aed::calcularSuma(calificaciones) << '\n';
    std::cout << "Promedio: " << aed::calcularPromedio(calificaciones) << '\n';
    return 0;
}

