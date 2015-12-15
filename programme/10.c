#define N 100000000

int k = 1;
short a[N], b[N][2];
long i;

int main() {
	for (i = 0; i < N - 1; i++) {
		b[i + 1][k] = a[i + 1];
		a[i] = b[i][k];
	}
}