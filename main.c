#include "factorial.h"

int main()
{
        int opcion;
        printf("Menu de Opciones\n");
        printf("1. Factorial\n");
        printf("2. Conversor Decimal a Binario\n");
        printf("3. Numeros Primos\n");
        printf("4. Suma-Multiplicacion\n");
        printf("5. Fibonacci\n");
        /*opcion*/
        printf("Digite su opción\n");
        scanf("%d", &opcion);
        /*casos*/
        switch(opcion){
          case 1:
          factorial();
          break;
          case 2:
          break;
          case 3:
          break;
          case 4:
          break;
          case 5:
          break;
        }
        return 0;
}
