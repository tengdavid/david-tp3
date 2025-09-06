#include <stdio.h>
#include <math.h>

float calcularAreaRectangulo(float longitud, float altura) {
    return longitud * altura;
}

float calcularPerimetroRectangulo(float longitud, float altura) {
    return 2 * (longitud + altura);
}

float calcularDiagonalRectangulo(float longitud, float altura) {
    return sqrt((longitud * longitud) + (altura * altura));
}

float calcularAreaCirculo(float radio) {
    return M_PI * radio * radio;
}

float calcularPerimetroCirculo(float radio) {
    return 2 * M_PI * radio;
}

void imprimirResultados(float area, float perimetro) {
    printf("El Área es: %.2f\n", area);
    printf("El Perímetro es: %.2f\n", perimetro);
}

int main() {
    int opcion;
    float longitud, altura, radio;
    float area, perimetro, diagonal;

    printf("Ingrese la figura que desea calcular (1: rectángulo, 2: círculo): ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("Elegiste rectángulo\n");
            printf("Ingrese la longitud: ");
            scanf("%f", &longitud);
            printf("Ingrese la altura: ");
            scanf("%f", &altura);

            area = calcularAreaRectangulo(longitud, altura);
            perimetro = calcularPerimetroRectangulo(longitud, altura);
            diagonal = calcularDiagonalRectangulo(longitud, altura);

            imprimirResultados(area, perimetro);
            printf("La diagonal es: %.2f\n", diagonal);
            break;

        case 2:
            printf("Elegiste círculo\n");
            printf("Ingrese el radio: ");
            scanf("%f", &radio);

            area = calcularAreaCirculo(radio);
            perimetro = calcularPerimetroCirculo(radio);

            imprimirResultados(area, perimetro);
            break;

        default:
            printf("Opción no válida, intenta de nuevo\n");
    }
    return 0;
}
