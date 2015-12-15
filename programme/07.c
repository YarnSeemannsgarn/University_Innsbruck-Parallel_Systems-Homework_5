#define N 100000000L

int k = 2;
short a[4*N];
long i;

int main() {
	for (i = 0; i < N; i++)
		a[4 * i] = a[2 * i - 1];
}