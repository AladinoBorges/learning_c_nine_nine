#include <stdio.h>
#include <stdbool.h>

/* Exercise: you must construct an `if` statement inside the `guessNumber` function statement that checks if the number `guess` is equal to 555. If that is the case, the function must print out using `printf` "Correct. You guessed it!". If `guess` is less than 555, the function must print out using `printf` "Your guess is too low." If `guess` is greater than 555, the function must print out using `printf` "Your guess is too high." */

void guessNumber(int guess) {
  int correctNumber = 555;

  if (guess == correctNumber) {
    printf("Correct. You guessed it!\n");
  } else if (guess < correctNumber) {
    printf("Your guess is too low.\n");
  } else {
    printf("Your guess is too high.\n");
  }
}

int main() {
  int age = 18;
  int emancipationAge = 16;
  bool checkAge = false;

  if (checkAge != true) {
    printf("Congratulations! There is no need to check your age.\n");
  } else if(age == 18 || age == emancipationAge) {
    printf("You are eligible to vote.\n");
  } else if (age > 18 && age < 100) {
    printf("You are more than eligible to vote.\n");
  } else if (age == 17) {
    printf("You're almost eligible to vote.\n");
  } else {
    printf("You're not eligible to vote.\n");
  }

  // Call the `guessNumber` function with a sample guess
  guessNumber(500); // Expected output: "Your guess is too low."
  guessNumber(600); // Expected output: "Your guess is too high."
  guessNumber(555); // Expected output: "Correct. You guessed it!"

  return 0;
};
