#define N 100000000

int i = 2;
short b[3][N];
long j;

int main() {
	for (j = 0; j < N; j++)
		b[i][j] = b[i - 1][j];
}