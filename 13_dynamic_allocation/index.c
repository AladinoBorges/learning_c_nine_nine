#include <stdio.h>
#include <stdlib.h>

/* Dynamic allocation of memory allows building complex data structures such as linked lists. Allocating memory dynamically helps us to store data without initially knowing the size of the data in the time we wrote the program.

To allocate a chunk of memory dynamically, we need to have a pointer ready to store the location of the newly allocated memory. We can access memory that was allocated to us using that same pointer, and we can use that pointer to free the memory again, once we have finished using it.*/
typedef struct {
  char * name;
  int age;
} PersonType;

/* Exercise: use malloc to dynamically allocate a point structure.*/
void allocatePoint() {
  typedef struct {
    int x;
    int y;
  } PointType;

  PointType * coordinates = NULL;

  /* Dynamically allocate a new point struct which mypoint points to here */
 coordinates = (PointType *) malloc(sizeof(PointType));

  coordinates->x = 10;
  coordinates->y = 20;

  printf("Coordinates: (%d, %d)\n", coordinates->x, coordinates->y);

  free(coordinates);
}

int main() {
  /* To allocate a new `PersonType` in the `programmer` argument, we use the syntax bellow that tells the compiler that we want to dynamically allocate just enough to hold a `PersonType` struct in memory and then return a pointer of type `PersonType` to the newly allocated data. The memory allocation function `malloc()` reserves the specified memory space. In this case, this is the size of `PersonType` in bytes.

  The reason we write `(PersonType *)` before the call to `malloc()` is that `malloc()` returns a "void pointer," which is a pointer that doesn't have a type. Writing `(PersonType *)` in front of it is called **typecasting**, and changes the type of the pointer returned from `malloc()` to be `PersonType`. However, it isn't strictly necessary to write it like this as C will implicitly convert the type of the returned pointer to that of the pointer it is assigned to (in this case, `programmer`) if you don't typecast it.

  Note that `sizeof` is not an actual function, because the compiler interprets it and translates it to the actual memory size of the person struct.*/
  PersonType * programmer = (PersonType *) malloc(sizeof(PersonType));

  /* To access the person's members, we can use the `->` notation:*/
  programmer->name = "aladino borges";
  programmer->age = 35;

  printf("Name: %s\n", programmer->name);
  printf("Age: %d\n", programmer->age);

  /* After we are done using the dynamically allocated struct, we can release it using `free(programmer)`. It's important to always free dynamically allocated memory to avoid memory leaks and notice that the `free` does not delete the `programmer` variable itself, it simply releases the data that it points to. The `programmer` variable will still point to somewhere in the memory - but after calling `free(programmer)` we are not allowed to access that area anymore. We must not use that pointer again until we allocate new data using it.*/
  free(programmer);

  allocatePoint();

  return 0;
}
