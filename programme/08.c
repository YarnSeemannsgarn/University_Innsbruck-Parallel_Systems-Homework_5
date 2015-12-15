#define N 5000000000L

int i = 2;
short b[3][N];
long j;

int main() {
  #pragma parallel
  for (j = 0; j < N; j++)
    b[i][j] = b[i - 1][j];
}
