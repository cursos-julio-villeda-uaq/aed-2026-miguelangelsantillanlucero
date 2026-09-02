# Actividad 9 — Suma regresiva iterativa y recursiva

## Propósito
Implementar una suma regresiva de dos maneras: iterativa y recursiva, y validar ambas mediante pruebas automáticas.

## Problema
El programa debe leer desde teclado un entero no negativo `n` y calcular la suma `n + (n-1) + ... + 1`. Ejemplo: para `n = 5`, el resultado es `15`.

## Contrato técnico
Implementa exactamente:
```cpp
long long sumaIterativa(unsigned int n);
long long sumaRecursiva(unsigned int n);
```
- `sumaIterativa` debe usar un ciclo.
- `sumaRecursiva` debe llamarse a sí misma y tener un caso base explícito.
- Para `n = 0`, ambas regresan `0`.
- `main.cpp` debe leer `n` desde teclado y ejecutar ambas funciones.

Puedes modificar solo `src/suma_regresiva.cpp`, `src/main.cpp` y `EXPLICACION.md`. No modifiques `include/`, `tests/`, `CMakeLists.txt` ni `.github/workflows/`.

## Ejecución local
```bash
cmake -S actividad-09 -B actividad-09/build
cmake --build actividad-09/build
ctest --test-dir actividad-09/build --output-on-failure
```

Haz commit y push a `main`, revisa GitHub Actions y, cuando tu versión final esté lista, registra el SHA en `EXPLICACION.md` y marca Entregada en Classroom.

## Evaluación — 100 puntos
- Iterativa: 25
- Recursiva y caso base: 25
- Lectura y ejecución de ambas: 20
- Pruebas automáticas: 20
- Claridad y explicación: 10
