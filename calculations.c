/* dltest.c */
#include <stdio.h>
#include <dlfcn.h>
#include "add.h"
#include "sub.h"
#include "mul.h"
#include "div.h"
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
   printf ("add(4,8)=%d\n", (*add)(4,8));
   printf ("sub(4,8)=%d\n", (*sub)(4,8));
   printf ("mul(4,8)=%d\n", (*mul)(4,8));
   printf ("div(4,8)=%d\n", (*div)(4,8));
   dlclose(handle);
}
