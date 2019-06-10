/*factorial*/
#include"factorial.h"

void factorial()
{
  int c, n, fact = 1;

  printf("Introduce el numero a calcular el factorial\n");
  scanf("%d", &n);

  for (c = 1; c <= n; c++)
    fact = fact * c;

  printf("Factorial of %d = %d\n", n, fact);
}
