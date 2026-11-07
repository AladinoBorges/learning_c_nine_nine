#include <stdio.h>
#include "helpers.h"

int main() {
  printHello("Aladino Borges");

  int multiplied = multiply(5, 3);
  int summed = sum(10, 20);

  printf("5 multiplied by 3 is: %d\n", multiplied);
  printf("10 plus 20 is: %d\n", summed);

  print_big(15);
  print_big(5);
  print_big(9);
  print_big(11);

  return 0;
}
