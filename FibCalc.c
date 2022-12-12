#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned long long int calculateFibonacci(int n)
{
  return roundl((powl((1 + sqrtl(5)) / 2, n) - powl((1 - sqrtl(5)) / 2, n)) / sqrtl(5));
}

int main()
{
  printf("FibCalc\n");
  printf("Błażej Typek\n");
  printf("I2S 1.5\n");
  
  printf("Numer elementu ciągu Fibonacciego (z zakresu <0, 89>): \n");
  int n = 0;
  if (scanf("%d", &n) != 1 || n < 0 || n > 89)
  {
    printf("Błąd! Niepoprawny numer elementu ciągu!\n");
    return EXIT_FAILURE;
  }

  unsigned long long int result = calculateFibonacci(n);
  printf("Wartość ciągu dla elementu o numerze %d wynosi: %llu\n", n, result);
  
  return EXIT_SUCCESS;
}