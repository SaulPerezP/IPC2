#include <stdio.h>

//Referenciación: Es la obtención de la dirección de una variable


int main() {
    
    int x = 33;
    int y;
    int *p;
    p = &x;
    printf("El valor de p es de %d", *p);
    y = *p + 10;
    printf("El valor de y es %d", y);
    
    return 0;
}
  