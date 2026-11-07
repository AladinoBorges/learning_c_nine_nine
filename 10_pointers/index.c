#include <stdio.h>

/* Pointers are also variables and play a very important role in C programming language. They are used for several reasons, such as:
  - Strings;
  - Dynamic memory allocation;
  - Sending function arguments by reference;
  - Building complicated data structures;
  - Pointing to functions;
  - Building special data structures (i.e. Tree, Tries, etc...).
And many more.

A pointer is essentially a simple integer variable which holds a `memory address` that points to a value, instead of holding the actual value itself.

The computer's memory is a sequential store of data, and a pointer points to a specific part of the memory. Our program can use pointers in such a way that the pointers point to a large amount of memory - depending on how much we decide to read from that point on. */
int main() {
  /* Strings as pointers: in C, `strings` are called `C-Strings` to differentiate them from other strings when mixed with C++. The following line does three things:
    1. It allocates a local (stack) variable called `name`, which is a pointer to a single character;
    2. It causes the string "John" to appear somewhere in the program memory (after it is compiled and executed, of course);
    3. It initializes the `name` argument to point to where the `J` character resides at (which is followed by the rest of the string in the memory).

  If we try to access the `name` variable as an array, it will work, and will return the ordinal value of the character `J`, since the `name` variable actually points exactly to the beginning of the string. Since we know that the memory is sequential, we can assume that if we move ahead in the memory to the next character, we'll receive the next letter in the string, until we reach the end of the string, marked with a null terminator (the character with the ordinal value of 0, noted as `\0`).

  Dereferencing: is the act of referring to where the pointer points, instead of the memory address. We are already using dereferencing in arrays - but we just didn't know it yet. The brackets operator - `[0]` for example, accesses the first item of the array. And since arrays are actually pointers, accessing the first item in the array is the same as dereferencing a pointer. Dereferencing a pointer is done using the asterisk operator `*`. */
  char * name = "John";

  /* If we want to create an array that will point to a different variable in our stack, we can write the following code: */
  int ageWhenStartedLearningC = 35; // Define a local variable in the stack
  int *agePointer = &ageWhenStartedLearningC; // Define a pointer variable, and point it to the variable using the & operator

  printf("I started learning C at the age of %d\n", ageWhenStartedLearningC);
  printf("I started learning C pointers at the age of %d\n", *agePointer); // Dereference the pointer to get the value of the variable it points to

  /* Notice that we used the `&` operator to point at the variable `ageWhenStartedLearningC`, which we have just created. We then referred to it using the dereferencing operator `*`. We can also change the contents of the dereferenced variable: */
  ageWhenStartedLearningC -= 5; // Change the value of the variable `ageWhenStartedLearningC`
  *agePointer -= 1; // Change the value of the variable `ageWhenStartedLearningC` using the pointer

  printf("I started learning programming at the age of %d\n", *agePointer);

  /* Exercise: create a pointer to the local variable `n` called `pointer_to_n`, and use it to increase the value of `n` by one. */
  int n = 10;
  int * pointer_to_n = &n;

  *pointer_to_n += 1;

  /* testing code */
  if (pointer_to_n != &n || *pointer_to_n != 11) {
    return 1;
  }

  printf("The value of n is: %d\n", n); // Output: The value of n is: 11

  return 0;
}
