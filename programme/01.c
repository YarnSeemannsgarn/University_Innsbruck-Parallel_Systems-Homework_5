#define N 10000000000L

short a[N];
long i;

int main() {
  #pragma parallel
  for (i = 0; i < N; i++) {
    a[i] = i;
  }
}

