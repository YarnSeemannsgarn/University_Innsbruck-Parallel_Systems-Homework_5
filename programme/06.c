#define N 1000000000

int k = 2;
short a[N];
long i;

int main() {
	for (i = N / 4; i < N / 2 - k; i++)
		a[i] = a[i + k];
}