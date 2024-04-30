#include <stdio.h>
//#include <string.h>

int fact(int);

int main() {
  int result = fact(10);
  printf("%d", result);
  return 0;
}

int fact(int k) {
  if (k > 1) {
    //printf("%d\n",k);
    return k * fact(k - 1);
  } else {
    //printf("1\n");
    return 1;
  }
}
