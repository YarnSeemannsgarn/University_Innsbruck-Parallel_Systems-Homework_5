#define N 16000000000L  

short a[N];
long i;

int main() {
  #pragma parallel
  for (i = 0; i < N - 1; i += 2)
    a[i] = a[i + 1];
}
