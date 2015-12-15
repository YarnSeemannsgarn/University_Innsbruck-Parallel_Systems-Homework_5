#define N 500000000L

int k = 0;
short a[N], b[N][1];
long i;

int main() {
	// a[] is a global variable and therefore already initialized with zero

	for (i = 0; i < N; i++)
		b[i][k] = b[a[i]][k];
}
