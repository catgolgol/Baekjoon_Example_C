#include <stdio.h>

int p(int n) {
	if (n<=1) return 1;
	return n*p(n-1);
}
int main() {
	int n;

	scanf("%d", &n);
	printf("%d", p(n));

	return 0;
}