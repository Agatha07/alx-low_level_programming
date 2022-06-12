#include <stdio.h>
/**
* main - print prints the first 50 Fibonacci numbers, starting with 1 and 2
* Return: 0
*/

int main() {

  int i;
  int n = 50;

  int t1 = 1, t2 = 2;

  int nextTerm = t1 + t2;

   printf("%d, %d, ", t1, t2);

   for (i = 1; i <= 50; ++i) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }

  return 0;
}
