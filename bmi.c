#include <stdio.h>

int peso;
float altura;
float IMC;

int main(){
    printf("CALCULADORA IMC\n");
    printf("INGRESAR TU PESO:");
    scanf("%d", &peso);
    printf("INGRESAR TU ALTURA:");
    scanf("%f", &altura);
      
IMC = peso / ( altura * altura );
      printf("TU IMC ES: %.2f\n", IMC);
      
    if( IMC<18.5 ){
        printf("TU IMC: BAJO PESO\n");    
    }
    else if( 18.5>=IMC && 24.9>=IMC )
        printf("TU IMC: NORMAL\n");
    else if( 25.0<=IMC && 29.9>=IMC )
        printf("TU IMC: SOBREPESO\n");
    else if( IMC>30 )
        printf("TU IMC: OBESODAD\n");
    
    printf("<18.5      \tBajo peso\n");
    printf("18.5 a 24.9\tNormal\n");
    printf("25.0 a 29.9\tSobrepeso\n");
    printf(">=30       \tObesidad\n");
    
    return 0;
}