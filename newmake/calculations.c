#include <stdio.h>
#include "./lib/add.h"
#include "./lib/sub.h"
#include "./lib/mul.h"
#include "./lib/div.h"

int main() {
   int (*add)(int, int), (*sub)(int, int), (*mul)(int, int), (*div)(int, int);
   printf ("add(8,4)=%d\n", (*add)(8,4));
   printf ("sub(8,4)=%d\n", (*sub)(8,4));
   printf ("mul(8,4)=%d\n", (*mul)(8,4));
   printf ("div(8,4)=%d\n", (*div)(8,4));
}
