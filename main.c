#include <stdio.h>

int main(){
    char nombre[100];
    printf("Hola mundo!");

    printf("\n\nNombre: ");
    fgets(nombre, sizeof(nombre), stdin);//Donde se va a guardar eso que vamos a leer
                                        //Hasta cuanto vamos a leer
                                        //Desde la entrada de la terminal

    printf("Hola %s", nombre);

    return 0;
}