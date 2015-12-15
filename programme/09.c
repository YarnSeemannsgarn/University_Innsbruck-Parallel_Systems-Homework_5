#define N 100000L

short b[N][N];
long i, j;

int main() {
  #pragma parallel
  for (i = 0; i < N - 1; i += 2)
    #pragma parallel
    for (j = i; j < N; j++)
      b[i][j] = b[i + 1][j - 1];
}
