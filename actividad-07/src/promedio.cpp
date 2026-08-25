#include "promedio.hpp"

#include <stdexcept>

namespace aed {

double calcularSuma(const std::vector<double>& calificaciones) {
    // TODO: recorre el vector con un for basado en rango y devuelve la suma.
    return 0.0;
}

double calcularPromedio(const std::vector<double>& calificaciones) {
    if (calificaciones.empty()) {
        throw std::invalid_argument("No se puede promediar un vector vacío");
    }

    // TODO: usa calcularSuma y devuelve el promedio.
    return 0.0;
}

}  // namespace aed
