#include <stdio.h>

int main() {
  /* Strings in C are actually arrays of characters. Although using pointers in C is an advanced subject, fully explained later on, we will use pointers to a character array to define simple strings, in the following manner: */
  const char * name = "Aladino Borges";

  /* The method above creates a string which we can only use for reading. If we wish to define a string which can be manipulated, we will need to define it as a local character array: */
  char birthCity[] = "Luanda";

  /* The above notation is different because it allocates an array variable so we can manipulate it. The empty brackets notation `[]` tells the compiler to calculate the size of the array automatically. This is in fact the same as allocating it explicitly, adding one to the length of the string: */
  char birthCountry[] = "Angola"; /* is the same as `char birthCountryExplicit[7] = "Angola";` */

  /* The reason that we need to add one, although the string John Smith is exactly 10 characters long, is for the string termination: a special character (equal to 0) which indicates the end of the string. The end of the string is marked because the program does not know the length of the string - only the compiler knows it according to the code. */
  int birthYear = 1991;
  int currentYear = 2026;
  int currentAge = currentYear - birthYear;

  /* Prints the formatted string as: Aladino Borges is 35 years old and was born in Luanda, Angola. */
  printf("%s is %d years old and was born in %s, %s.\n", name, currentAge, birthCity, birthCountry);

  /* Why use `\n` at the end of the print statement?
  Because the `printf` function does not automatically add a new line at the end of the printed string, we need to add it manually. If we do not add it, the next output will be printed on the same line as the previous one. */

  /* The function `strlen` returns the length of the string which has to be passed as an argument: */
  printf("The length of the string '%s' is %d.\n", name, strlen(name));

  /* The function `strncmp` compares between two strings, returning the number `0` if they are equal, or a different number if they are different. The arguments are the two strings to be compared, and the maximum comparison length. There is also an unsafe version of this function called `strcmp`, but it is not recommended to use it. For example: */
  if (strncmp(name, "Aladino Borges", 14) == 0) {
    printf("Hello, %s!\n", name);
  } else {
    printf("You are not the person I am looking for. Go away!\n");
  }

  /* The function `strncat` appends first `n` characters of `src string` to the `destination string` where `n` is `min(n,length(src))`; The arguments passed are `destination string`, `source string`, and `n - maximum number of characters to be appended`. For Example: */
  char lateProfession[15] = "Ethical Hacker";
  char professionHistory[34] = "Software Engineer";

  strncat(professionHistory, ", ", 2);
  printf("Profession History: %s\n", professionHistory);
  strncat(professionHistory, lateProfession, 15);
  printf("Profession History: %s\nString Length: %d", professionHistory, strlen(professionHistory));

  /* Exercise: Define the string `first_name` with the value `John` using the `pointer notation`, and define the string `last_name` with the value `Doe` using the `local array notation`. */
  const char * first_name = "John";
  char last_name[4] = "Doe";

  printf("\n\nFirst Name: %s\nLast Name: %s\n", first_name, last_name);

  return 0;
}
