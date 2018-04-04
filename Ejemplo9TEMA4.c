#include <stdio.h>
#include <string.h>
int main()
{
char color[] = "negro";
char respuesta[11];
do // El bucle se repite mientras
{// las cadenas *no* coincidan
printf("Adivina un color: ");
scanf (" %10s", respuesta);
} while (strcmp(color, respuesta) != 0);
printf("½Correcto!\n");
return 0;
}
