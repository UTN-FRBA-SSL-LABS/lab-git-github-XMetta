#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */
/* Decidi poner const para asi no pisar las variables en un futuro (porque quise)*/
int sumar(const int a, const int b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */

/* Multiplica dos enteros y retorna el resultado */
int multiplicar(int a, int b) {
    return a * b;
}



/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0;
}
