#define N 25000

short b[N][N];
long i, j;

short function_call() {
	return 1;
}

int main() {
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			b[i][j] = function_call();
}
