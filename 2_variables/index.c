#include <stdio.h>
#include <stdbool.h>

int main() {
  // Integers - whole numbers which can be either positive or negative. Defined using char, int, short, long or long long.
  char notDefinedValue = 'n';
  int age = 34, birthDay = 30, birthYear = 1991, birthMonth = 7, ageIn2000;
  short shortValue = 32767;
  long longValue = 9223372036854775807;
  long long longLongValue = 9223372036854775807;

  // Unsigned integers - whole numbers which can only be positive. Defined using unsigned char, unsigned int, unsigned short, unsigned long or unsigned long long.
  unsigned char unsignedCharValue = 255;
  unsigned int unsignedIntValue = 4294967295;
  unsigned short unsignedShortValue = 65535;
  unsigned long unsignedLongValue = 4294967295;
  unsigned long long unsignedLongLongValue = 18446744073709551615;

  // Floating point numbers - real numbers (numbers with fractions). Defined using float and double.
  float height = 1.98f; // The 'f' suffix indicates that 1.98 is of type float; without it, it would be a double.
  double weight = 100.0;

  // Booleans - either true or false. Defined using bool. In older versions of C, the char type was used to represent booleans.
  bool learningC = true;
  
  ageIn2000 = 2000 - birthYear;

  printf("Age in %d: %d\n", birthYear, ageIn2000); // The %d format specifier is used to print integers. The first %d corresponds to birthYear, and the second %d corresponds to ageIn2000.

  return 0;
}
