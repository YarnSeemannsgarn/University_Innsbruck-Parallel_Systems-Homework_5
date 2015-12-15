#define N 1000000000

short a[N];
long i, sum;

int main() {
	for (i = N / 2; i < N; i++) {
		a[i - N / 2] = a[i];
		sum += a[i];
	}
}