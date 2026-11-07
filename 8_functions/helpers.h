#include <stdio.h>

int multiply(int value, int multiplier)
{
  return value * multiplier;
}

int sum(int value, int addend)
{
  return value + addend;
}

void printHello(const char *name)
{
  printf("Hello, %s!\n", name);
}

/* Exercise: write a function called `print_big` which receives one argument (an integer) and prints the line `x is big` (where x is the argument) if the argument given to the function is a number bigger than 10. */
void print_big(int value)
{
  int MAX_VALUE = 10;

  if (value > MAX_VALUE)
  {
    printf("%d is big\n", value);
  }
}
