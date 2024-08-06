#include <stdio.h>

/**
 * b - prints a message before main is executed
 *
 * This function is marked with the constructor attribute, ensuring
 * it runs automatically before the main function. It prints a message
 * to the standard output.
 */
void b(void) __attribute__((constructor));
void b(void) {
  printf("You're beat! and yet, you must allow,\n");
  printf("I bore my house upon my back!\n");
}
