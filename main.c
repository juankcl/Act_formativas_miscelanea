#include "factorial.h"
//#include "complex.hpp"

int main()
{
        int opcion;
        printf("Menu de Opciones\n");
        printf("1. Factorial\n");
        printf("2. Conversor Decimal a Binario\n");
        printf("3. Numeros Primos\n");
        printf("4. Multiplicacion\n");
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
          	// float a;
          	// float b;
          	// n_complex c;
          	// printf("Teclee el primer valor real: ");
          	// scanf("%f",&a);
          	// printf("\n Teclee el primer valor imaginario: ");
          	// scanf("%f",&b);
          	// n_complex val1(a,b);
          	// printf("Teclee el primer segundo real: ");
          	// scanf("%f",&a);
          	// printf("\n Teclee el primer segundo imaginario: ");
          	// scanf("%f",&b);
          	// n_complex val2(a,b);
          	// c=val1*val2;
          	// c.s_print();

          break;
          case 5:
          break;
        }
        return 0;
}
