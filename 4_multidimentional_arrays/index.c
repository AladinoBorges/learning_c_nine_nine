#include <stdio.h>

int main() {
  /* The multi-dimensional array is declared using the syntax `type name[size1][size2]...` */
  
  char basicVowels[1][5] = {
    {'a', 'e', 'i', 'o', 'u'}
  };

  /* Two-dimensional Arrays: the simplest form of multidimensional array is the two-dimensional array. A two-dimensional array is pretty much a list of one-dimensional arrays, where type can be any C data type (int, char, long, long long, double, etc.) and arrayName will be a valid C identifier, or variable. A two-dimensional array can be considered as a table which will have [ x ] number of rows and [ y ] number of columns. */

  char allVowels[2][5] = {
    {'a', 'e', 'i', 'o', 'u'},
    {'A', 'E', 'I', 'O', 'U'}
  };

  printf("The third vowel in the second row is: %c\n", allVowels[1][2]);

  /* Let us try to find out the average marks of a group of five students for two subjects, Mathematics and Physics. To do this, we use a two-dimensional array called grades. The marks corresponding to Mathematics would be stored in the first row (grades[0]), whereas those corresponding to Physics would be stored in the second row (grades[1]). Complete the following steps so that you can execute this program.

      * Declare grades as a two-dimensional array of integers
      * Complete the for loops by specifying their terminating conditions
      * Compute the average marks obtained in each subject */

  float averageGrade;
  int mainIndex;
  int gradeIndex;

  int numberOfStudents = 5, numberOfSubjects = 2;

  int grades[2][5] = {
    {80, 70, 65, 89, 90},
    {85, 80, 80, 82, 87}
  };

  for (mainIndex = 0; mainIndex < numberOfSubjects; mainIndex++) {
    averageGrade = 0;

    for (gradeIndex = 0; gradeIndex < numberOfStudents; gradeIndex++) {
      averageGrade += grades[mainIndex][gradeIndex];
    }

    averageGrade /= numberOfStudents;

    printf("The average marks obtained in subject %d is: %.2f\n", mainIndex, averageGrade);
  }

  return 0;
}
