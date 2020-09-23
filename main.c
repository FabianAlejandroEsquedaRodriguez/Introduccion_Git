#include <stdio.h>

int main(){
    char nombre[100];
    unsigned int edad;//Variable sin signom
    printf("Hola mundo!");

    printf("\n\nNombre: ");
    fgets(nombre, sizeof(nombre), stdin);//Donde se va a guardar eso que vamos a leer
                                        //Hasta cuanto vamos a leer
                                        //Desde la entrada de la terminal

    printf("Hola %s", nombre);

    printf("\n\nEdad: ");
    scanf("%u", &edad);

    printf("\nVas a cumplir %u", edad + 1);

    return 0;
}