#include <stdio.h>

/* Arrays can only have one type of variable, because they are implemented as a sequence of values in the computer's memory. Because of that, accessing a specific array cell is very efficient. */

int main() {
  /* Declare an array to store N ages */
  int ages[3], index = 0;

  /* Populate the array */
  ages[0] = 34;
  ages[1] = 17;
  ages[2] = 0;

  /* Print the Nth element */
  printf("Age at index %d: %d\n", index, ages[index]);

  return 0;
}
