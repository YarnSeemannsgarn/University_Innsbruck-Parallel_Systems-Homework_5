#define N 25000

short b[N][N];
long i, j;

int main() {
	for (i = 0; i < N - 1; i += 2)
		for (j = i; j < N; j++)
			b[i][j] = b[i + 1][j - 1];
}
