#define N 1000
#define M 1000
#define P 100

short a[N][M*2][3*P+15];
long i, j, k;

int main() {
  for (i = 2; i < N; i++)
    for (j = 1; j < M; j++)
      for (k = 0; k < P; k++)
	a[i - 2][2 * j][3 * k + 3] = a[i][2 * j - 2][3 * k + 15] + 4;
}
