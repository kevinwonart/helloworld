#include <stdio.h>

int main(){
  char c = 'a';
  for(int i = 0; i < 26; i++){
    printf("%c - %d\n", c, c - 'a' + 1);
    c = c + 1;
  }
  return 0;
}
