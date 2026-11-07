#include <stdio.h>

int main() {
  int index = 0;
  int limit = 10;

  while (index < limit) {
    index += 1;

    if (index % 2 == 1) {
      continue; /* Skip the rest of the loop body for odd numbers */
    }

    printf("The even number is: %d\n", index);
  }

  /* Exercise: the `array` variable consists of a sequence of ten numbers. Inside the while loop, you must write two `if` conditions, which change the flow of the loop in the following manner (without changing the `printf` command):
    - If the current number which is about be to printed is less than 5, don't print it.
    - If the current number which is about be to printed is greater than 10, don't print it and stop the loop. */
  int array[] = {1, 7, 4, 5, 9, 3, 5, 11, 6, 3, 4};
  index = 0; /* Reset index for the next while loop */

  while (index < limit) {
    if (array[index] < 5) {
      index += 1;

      continue; /* Skip printing numbers less than 5 */
    }

    if (array[index] > 10) {
      break; /* Stop the loop for numbers greater than 10 */
    }

    printf("The number is: %d\n", array[index]);
    index += 1;
  }

  return 0;
}
