#define N 100000L

short b[N][N];
long i, j;

short function_call() {
  return 1;
}

int main() {
  #pragma parallel
  for (i = 0; i < N; i++)
    #pragma parallel
    for (j = 0; j < N; j++)
      b[i][j] = function_call();
}
