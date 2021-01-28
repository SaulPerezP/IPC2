#include <stdio.h>

//Referenciación: Es la obtención de la dirección de una variable


int main() {
    int value = 18;
    int *ptr_1, *ptr_2;
    ptr_1 = &value;
    ptr_2 = ptr_1;
    
    printf("La dirección de memoria de ptr_2 = %p", ptr_2);
    return 0;
}
  