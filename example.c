#include "header.h"

int leak_example(int c) {
  void *p = my_malloc(10);
  if(c)
    return -1;   // "p" is leaked
  /* ... */
  my_free(p);
  return 0;
}


int leak_example1(int c) {
  void *p = my_malloc(10);
  if(c)
    return -1;   // "p" is leaked
  /* ... */
  my_free(p);
  return 0;
}