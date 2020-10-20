/* dltest.c */
#include <stdio.h>
#include "./lib/add.h"
#include "./lib/sub.h"
#include "./lib/mul.h"
#include "./lib/div.h"

int main() {
   printf ("add(4,8)=%d\n", (*add)(4,8));
   printf ("sub(4,8)=%d\n", (*sub)(4,8));
   printf ("mul(4,8)=%d\n", (*mul)(4,8));
   printf ("div(4,8)=%d\n", (*div)(4,8));

}
