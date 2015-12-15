#define N 100000L
#define M 100000L

short a[N], b[M+3][N];
long i, j, x, y;

int main() {
  for (i = 2; i < N; i++)
    for (j = 0; j < M; j++) {
      a[i] = b[j + 3][i - 2] - 99;
      b[j + 1][i] = x + y * i;
    }
}
