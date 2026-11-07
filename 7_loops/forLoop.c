#include <stdio.h>
/* This macro calculates the length of an array and returns it as an integer. It is a common practice to use this macro to avoid hardcoding the length of an array, which can lead to errors if the array size changes in the future. */
#define GET_ARRAY_LENGTH(targetArray) (sizeof(targetArray) / sizeof((targetArray)[0]))

int main() {
  int thirtheenNaturalNumbers[13] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
  int numbersArrayLength = GET_ARRAY_LENGTH(thirtheenNaturalNumbers);
  int sum = 0;

  /* For loop iterating the length of the array */
  for (int index = 0; index < numbersArrayLength; index++) {
    sum += thirtheenNaturalNumbers[index];
  }

  printf("The sum of the %dth natural numbers is: %d\n", numbersArrayLength, sum);

  /* Exercise: Calculate the factorial (multiplication of all items `thirtheenNaturalNumbers[0]` to `thirtheenNaturalNumbers[13]`, inclusive), of the variable thirtheenNaturalNumbers. */
  int factorialResult = 1;

  for (int index = 0; index < numbersArrayLength; index++) {
    factorialResult *= thirtheenNaturalNumbers[index];
  }

  printf("The factorial of the %dth natural numbers is: %d\n", numbersArrayLength, factorialResult);

  return 0;
}
