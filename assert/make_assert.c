#include <stdio.h>
#include <assert.h>
#include <stdlib.h>


#define my_assert(expr) \
if(!expr) {printf(#expr); \
printf(" failed.\nfile:%s fusnction:%s line:%d\n", __FILE__, __FUNCTION__, __LINE__); \
exit(1);}

void foo(int num){
  my_assert(((num >= 0) && (num <= 100)));
  printf("foo : num = %d\n", num);
  
}

void main(int argc, char *argv[]){
  int num;

  if (argc > 1) {
    fprintf(stderr, " Usage : assert_test aNumber\n(0 <= aNumber <= 100)\n");
  }

  num = atoi(argv[1]);
  foo(num);
}
