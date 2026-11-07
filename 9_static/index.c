#include <stdio.h>
#include <stdbool.h>

/* `static` is a keyword in the C programming language. It can be used with variables and functions. */

/* static variable: by default, variables are local to the scope in which they are defined. Static variables have a property of preserving their value even after they are out of their scope! Hence, static variables preserve their previous value in their previous scope and are not initialized again in the new scope.

While static variables have scope over the file containing them making them accessible only inside a given file, global variables can be accessed outside the file too. */
int runner(bool useStatic) {
  if (useStatic) {
    static int staticCount = 2;
    staticCount += 1;

    return staticCount;
  }

  int count = 0;
  count += 1;

  return count;
}

/* static function: by default, functions are global in C. If we declare a function with `static`, the scope of that function is reduced to the file containing it. */
static void helloDarkness() {
  printf("Hello darkness my old friend...\n");
}

/* Exercise:  try to find the sum of some numbers by using the static keyword. Do not pass any variable representing the running total to the `sum()` function. */
int sum(int num) {
  static int total = 0;

  total += num;

  return total;
}

int main() {
  printf("Runner count: %d\n", runner(false)); // Output: Runner count: 1 
  printf("Runner count: %d\n", runner(false)); // Output: Runner count: 1 (because count is re-initialized to 0 in each call)

  printf("Runner count: %d\n", runner(true)); // Output: Runner count: 3
  printf("Runner count: %d\n", runner(true)); // Output: Runner count: 4 (because staticCount retains its value across calls)

  helloDarkness(); // Output: Hello darkness my old friend...

  /* Exercise */
  printf("%d ",sum(55));
  printf("%d ",sum(45));
  printf("%d ",sum(50));

  return 0;
}
