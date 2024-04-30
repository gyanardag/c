#include <stdio.h>
//#include <string.h>

int sum(int k);

int main() {
  int result = sum(3);
  printf("%d", result);
  return 0;
}

int sum(int k) {
  if (k > 0) {
    //printf("%d\n",k);
    return k + sum(k - 1);
  } else {
    //printf("0\n");
    return 0;
  }
}
