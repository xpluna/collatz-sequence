#include <stdio.h>

int main() {
	int n, moves = 0;
	
	printf("Enter a number\n");
	scanf("%d", &n);
	
	while (n > 1) {
		n += n % 2 ? 2*n+1 : -n/2;
		printf("%d\n", n);
		moves++;
	}
	
	printf("\nMoves count = %d", moves);
	
	return 0;
}