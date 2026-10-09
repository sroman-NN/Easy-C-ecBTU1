#include <stdlib.h>
#include <stdio.h>
int duplicar(int n){
    int resultado = n;
    return resultado;
}
int contador = 0;
int i = 0;
while (i < 5) {
    contador = i;
    i++;
}
int* puntero_buffer = (int*)malloc(sizeof(int) * 10);
if (!puntero_buffer) {
    printf("%s\n", "no se pudo crear el espacio");
} else {
    *puntero_buffer = 42;
    printf("%s %d\n", "El valor del buffer es", *puntero_buffer);
    free(puntero_buffer);
}
