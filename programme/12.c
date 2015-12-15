#define N 1000000000

short a[N];
long i;

int main() {
	for (i = 0; i < N - 1; i += 2)
		a[i] = a[i + 1];
}