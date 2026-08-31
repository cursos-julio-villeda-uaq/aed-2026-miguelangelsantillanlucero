# Actividad 8 — Promedio de calificaciones con vector

## Propósito

Aplicar `std::vector` para almacenar una cantidad variable de calificaciones y usar un ciclo `for` basado en rango para calcular la suma y el promedio.

## Flujo de trabajo

1. Trabaja únicamente en tu repositorio individual y en la carpeta `actividad-08/`.
2. Implementa las funciones declaradas en `include/promedio.hpp`.
3. Completa el programa para capturar y mostrar todas las salidas solicitadas.
4. Compila y ejecuta las pruebas localmente.
5. Haz `commit` y `push` a la rama `main`.
6. Revisa el resultado de **GitHub Actions → Pruebas C++ — Actividad 8**.
7. Corrige y vuelve a enviar los cambios necesarios antes de marcar **Entregada** en Classroom.

## Requisitos funcionales

- Solicitar una cantidad de calificaciones mayor que cero.
- Almacenar todas las calificaciones en un `std::vector<double>`.
- Recorrer el vector con un `for` basado en rango para calcular la suma.
- Calcular el promedio a partir de la suma y el número de elementos.
- Mostrar la cantidad capturada, las calificaciones, la suma y el promedio.
- `calcularPromedio` debe lanzar `std::invalid_argument` si recibe un vector vacío.

## Archivos permitidos

Puedes modificar únicamente:

- `src/promedio.cpp`
- `src/main.cpp`
- `EXPLICACION.md`

No modifiques `tests/`, `include/`, `CMakeLists.txt` ni `.github/workflows/`.

## Ejecución local

```bash
cmake -S actividad-08 -B actividad-08/build
cmake --build actividad-08/build
ctest --test-dir actividad-08/build --output-on-failure
```

## Evaluación (100 puntos)

- Uso correcto de `vector` y captura dinámica: 25 puntos.
- Recorrido con `for` basado en rango: 25 puntos.
- Suma, promedio y manejo del vector vacío: 25 puntos.
- Programa completo, claridad y explicación: 15 puntos.
- Pruebas visibles y estructura protegida intactas: 10 puntos.

Un resultado verde es retroalimentación provisional; la revisión docente y Classroom conservan la calificación oficial.

