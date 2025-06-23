#include <stdio.h>

int main() {
    int cantidad_estudiantes;
    
    do {
        printf("Ingrese la cantidad de estudiantes: ");
        scanf("%d", &cantidad_estudiantes);
        if (cantidad_estudiantes <= 0) {
            printf("Error: la cantidad debe ser un número positivo.\n");
        }
    } while (cantidad_estudiantes <= 0);

    float calificacion, suma = 0;
    float mayor = 0, menor = 100;
    int i;

    
    for (i = 0; i < cantidad_estudiantes; i++) {
        do {
            printf("Ingrese la calificación del estudiante %d (0 a 100): ", i + 1);
            scanf("%f", &calificacion);
            if (calificacion < 0 || calificacion > 100) {
                printf("Error: calificación fuera de rango. Debe estar entre 0 y 100.\n");
            }
        } while (calificacion < 0 || calificacion > 100);

        suma += calificacion;

  
        if (calificacion > mayor) {
            mayor = calificacion;
        }
        if (calificacion < menor) {
            menor = calificacion;
        }
    }


    float promedio = suma / cantidad_estudiantes;
    printf("\nPromedio de calificaciones: %.2f\n", promedio);


    printf("Calificación más alta: %.2f\n", mayor);
    printf("Calificación más baja: %.2f\n", menor);

    return 0;
}
