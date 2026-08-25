# Algoritmos y Estructuras de Datos — C++

Repositorio individual para las actividades del curso, periodo julio–noviembre de 2026.

## Estructura

- `include/algorithms.hpp`: declaraciones de funciones.
- `src/algorithms.cpp`: implementación del alumno.
- `src/main.cpp`: programa de ejemplo.
- `tests/test_algorithms.cpp`: pruebas automáticas.
- `.github/workflows/cpp-ci.yml`: compilación y pruebas en GitHub Actions.

## Compilar y probar

```bash
cmake -S . -B build
cmake --build build
ctest --test-dir build --output-on-failure
```

Cada cambio enviado a GitHub se compila y prueba automáticamente. No modifiques los archivos de pruebas salvo que la actividad lo indique.
