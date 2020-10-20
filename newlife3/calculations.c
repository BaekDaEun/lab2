/* dltest.c */
#include <stdio.h>
#include <dlfcn.h>
#include "./lib/add.h"
#include "./lib/sub.h"
#include "./lib/mul.h"
#include "./lib/div.h"
int main() {
   void *handle;
   int (*add)(int, int), (*sub)(int, int), (*mul)(int, int), (*div)(int, int);
   char *error;
   handle = dlopen ("./lib/libshared.so", RTLD_LAZY);
   if (!handle) {
      fputs (dlerror(), stderr);
      exit(1);
   }
   add = dlsym(handle, "add");
   if ((error = dlerror()) != NULL) {
      fprintf (stderr, "%s", error);
      exit(1);
   }
   sub = dlsym(handle, "sub");
   if ((error = dlerror()) != NULL) {
      fprintf (stderr, "%s", error);
      exit(1);
   }
   mul = dlsym(handle, "mul");
   if ((error = dlerror()) != NULL) {
      fprintf (stderr, "%s", error);
      exit(1);
   }
   div = dlsym(handle, "div");
   if ((error = dlerror()) != NULL) {
      fprintf (stderr, "%s", error);
      exit(1);
   }
   printf ("add(8,4)=%d\n", (*add)(8,4));
   printf ("sub(8,4)=%d\n", (*sub)(8,4));
   printf ("mul(8,4)=%d\n", (*mul)(8,4));
   printf ("div(8,4)=%d\n", (*div)(8,4));
   dlclose(handle);
}
