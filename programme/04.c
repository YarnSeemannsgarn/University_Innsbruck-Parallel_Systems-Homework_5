#define N 500000000

int k = 0;
short a[N], b[N][1];
long i;

int main() {
	for (i = 1; i < N; i++)
		a[i] = a[i - 1] + b[i][k];
}
