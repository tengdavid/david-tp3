#include <stdio.h>

int nota;

int main()
{

printf(" ingrese nota para determinar la calificacion: ");
scanf("%d", &nota);

if(nota>= 90)
 printf("calificacion A");
else if (nota>=80 && nota <90 )
 printf("calificacion B");
else if (nota>=70 && nota <80 )
 printf("calificacion C");
else if (nota>=60 && nota <70 )
 printf("calificacion D");
else if (nota>=60)
 printf("calificacion F");
 
return 0;

}