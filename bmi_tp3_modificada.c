#include <stdio.h>

int nota;

int main() {
    printf("CLASIFICADOR DE NOTAS\n");
    printf("INGRESÁ TU NOTA: ");
    scanf("%d", &nota);

    // Clasificación de nota en letras
    if (nota >= 90)
        printf("Calificación: A\n");
    else if (nota >= 80)
        printf("Calificación: B\n");
    else if (nota >= 70)
        printf("Calificación: C\n");
    else if (nota >= 60)
        printf("Calificación: D\n");
    else
        printf("Calificación: F\n");

    // Tabla de referencia
    printf("\nTABLA DE CALIFICACIONES:\n");
    printf(">= 90       \tCalificación A\n");
    printf("80 - 89     \tCalificación B\n");
    printf("70 - 79     \tCalificación C\n");
    printf("60 - 69     \tCalificación D\n");
    printf("< 60        \tCalificación F\n");

    return 0;
}