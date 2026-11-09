#include <stdio.h>

/* C structures are special, large variables which contain several named variables inside. Structures are the basic foundation for objects and classes in C. Structures are used for:
  - Serialization of data;
  - Passing multiple arguments in and out of functions through a single argument;
  - Data structures such as linked lists, binary trees, and more.

The most basic example of structures are points, which are a single entity that contains two variables - `x` and `y` (example bellow).*/
struct CoordinatesStructType {
  int x;
  int y;
};

/* Typedefs: this keyword allow us to define types with a different name - which can come in handy when dealing with structs and pointers. In this case, we'd want to get rid of the long definition of a point structure. We can use the syntax bellow to remove the `struct` keyword from each time we want to define a new point.

Structures can also hold pointers - which allows them to hold strings, or pointers to other structures as well - which is their real power. */
typedef struct {
  char * locationName;
  int x;
  int y;
} CoordinatesTypedefType;

/* Exercise: define a new data structure, named "person", which contains a string (pointer to char) called `name`, and an integer called `age`. */
typedef struct {
  char * name;
  int age;
} Person;

void drawWithStruct(struct CoordinatesStructType coordinates) {
  printf("WithStructing at (%d, %d)\n", coordinates.x, coordinates.y);
}

void drawWithTypedef(CoordinatesTypedefType coordinates) {
  printf("Location: %s\n", coordinates.locationName);
  printf("WithTypedefing at (%d, %d)\n", coordinates.x, coordinates.y);
}

int main() {
  struct CoordinatesStructType coordinatesUsingStruct;
  CoordinatesTypedefType coordinatesUsingTypedef;
  Person programmer;

  coordinatesUsingStruct.x = 10;
  coordinatesUsingStruct.y = 5;

  coordinatesUsingTypedef.x = 30;
  coordinatesUsingTypedef.y = 15;
  coordinatesUsingTypedef.locationName = "Luanda";

  drawWithStruct(coordinatesUsingStruct);
  drawWithTypedef(coordinatesUsingTypedef);

  programmer.name = "Aladino Borges";
  programmer.age = 35;

  printf("The programmer name is %s and he is %d years old.\n", programmer.name, programmer.age);

  return 0;
}
