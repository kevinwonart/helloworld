#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>


int alphaVal(char c){
  if (islower(c)) return c - 'a' + 1;
  if (isupper(c)) return c - 'A' + 1;

  return 0;
}

int sumString(char line[]) {
  int sum = 0;
  int product = 1;
  int isAlpha = isalpha(line[0]);

  for(int i = 0; i <strlen(line); i++){
    if(isAlpha == isalpha(line[i + 1])){
      if(isAlpha != 0){
        product *= alphaVal(line[i]);
        //printf("line[i]: %c\n  sum: %d  product: %d\n", line[i], sum, product);
      } else {
        product *= (line[i] - '0');
        //printf("line[i]: %c\n  sum: %d  product: %d\n", line[i], sum, product);
      }
    } else {
      if(isAlpha != 0){
        product *= alphaVal(line[i]);
        sum += product;
        //printf("line[i]: %c\n  sum: %d  product: %d\n", line[i], sum, product);
        product = 1;
        isAlpha = isalpha(line[i + 1]);
      } else {
        product *= (line[i] - '0');
        sum += product;
        //printf("line[i]: %c\n  sum: %d  product: %d\n", line[i], sum, product);
        product = 1;
        isAlpha = isalpha(line[i + 1]);
      }
    }
  }
  return sum;
}
int main(){
  char str[] = "ab42cd";
  char str2[] = "1234xxy";
  char str3[] = "a1b2c3d4e5f";
  char str4[] = "pqr39stu8vwx";
  printf("%d\n", sumString(str)); // 22
  printf("%d\n", sumString(str2)); //14424 
  printf("%d\n", sumString(str3)); //36
  printf("%d\n", sumString(str4)); //25055
  return 0;
}
/*
a - 1
b - 2
c - 3
d - 4
e - 5
f - 6
g - 7
h - 8
i - 9
j - 10
k - 11
l - 12
m - 13
n - 14
o - 15
p - 16
q - 17
r - 18
s - 19
t - 20
u - 21
v - 22
w - 23
x - 24
y - 25
z - 26
*/
