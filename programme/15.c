#define N 700

short a[N+1][N][N], b[N][N][N];
long i, j, k;

int main() {
  for (k = 1; k < N; k++)
    for (j = 1; j < N; j++) {
      b[1][j][k] = a[1][j - 1][k];
      #pragma parallel
      for (i = 1; i < N; i++)
	a[i + 1][j][k] = b[i][N - j][k];
    }
}
