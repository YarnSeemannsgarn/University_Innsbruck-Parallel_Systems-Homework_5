#define N 2000000000L

short a[4*N];
long i;

int main() {
  #pragma parallel
  for (i = 0; i < N; i++)
    a[4 * i] = a[2 * i - 1];
}
