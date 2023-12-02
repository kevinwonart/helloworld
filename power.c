/*
#include <stdio.h>

int power(int base, int n){
  int i, p;
  p = 1;
  for(i = 1; i <= n; ++i){
    p *= base;
  }
  return p;
}

main(){
  int i;
  for(i = 0; i < 10; ++i){
    printf("%d %d %d\n", i, power(2,i), power(-3,i));
  }
  return 0;
}

*/

#include <stdio.h>

int power(int base, int n){
  int p;
  for( p = 1; n > 0; --n)
    p *= base;
  return p;
}

main(){
  printf("10 to the power of 2 is %d\n", power(10,2));
  return 0;
}
