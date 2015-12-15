#include <stdlib.h>

#define N 1000000000L

int k = 2;
short a[N], b[N][3];
long i;

int main() {
  for (i = 0; i < N - abs(k); i++)
    b[i][k] = b[i + abs(k)][k] - a[i];
}
