#include <stdio.h>
#include <stdbool.h>

/* Usually function arguments are passed by value, by which means they are copied in and out of functions. But what if we pass pointers to values instead of the values themselves? This will allow us to give functions control over the variables and structures of the parent functions and not just a copy of them, thus directly reading and writing the original object.

The first function `addOneWithoutPointer` will not increase the value of the variable passed to it, as it works with a copy of the value. But the second function `addOneWithPointer` will increase the value of the variable passed to it, as it works with a pointer to the original variable.

The difference is that the second function receives a pointer to the variable `value` as an argument, and then it can manipulate it, because it knows where it is in the memory.*/

void addOneWithoutPointer(int value) {
  value += 1;
}

void addOneWithPointer(int *value) {
  *value += 1; // This can be expressed as `(*value)++` or `*value = *value + 1` too.
}

typedef struct {
  int x;
  int y;
} CoordinatesType;

/* Pointers to structures: if we want to create a function which moves a point forward in both `x` and `y` directions, called `move`. Instead of sending two pointers, we can now send only one pointer to the function of the point structure: */
void move(CoordinatesType *coordinates, bool applyDereference) {
  if (applyDereference) {
    /* If we wish to dereference a structure (this concept is explained at the end of the file) and access one of it's internal members, we have a shorthand syntax for that, because this operation is widely used in data structures.*/
    coordinates->x += 1;
    coordinates->y += 1;
  } else {
    (*coordinates).x += 1;
    (*coordinates).y += 1;
  }
}

/* Exercise: create  a function called `birthday` , which adds one to the `age` of a `person`.*/
typedef struct {
  char * name;
  int age;
} PersonType;

void birthday(PersonType *person) {
  person->age += 1;
}

int  main() {
  int age = 35;

  addOneWithoutPointer(age);
  printf("Using addOneWithoutPointer function, the age is %d\n", age);

  /* Notice that when calling the `addOneWithPointer` function, we must pass a reference to the variable `age`, and not the variable itself - this is done so that the function knows the address of the variable, and won't just receive a copy of the variable itself.*/
  addOneWithPointer(&age);
  printf("Using addOneWithPointer function, the age is %d\n", age);

  PersonType programmer;
  programmer.name = "Aladino Borges";
  programmer.age = 35;

  printf("The programmer name is %s and he is %d years old.\n", programmer.name, programmer.age);

  birthday(&programmer);
  printf("After the next birthday function, the programmer %s will be is %d years old.\n", programmer.name, programmer.age);

  return 0;
};

/* Dereferencing a structure pointer in C means accessing the actual structure object stored at the memory address held by the pointer, allowing you to read or modify its members.  This is primarily achieved using the arrow operator (`->`) or the indirection operator combined with the dot operator (`(*ptr).member`).

When you have a pointer to a structure, such as `CoordinatesType *ptr`, dereferencing allows you to interact with the data directly rather than the address.*/
