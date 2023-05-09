#include <stdio.h>

int main(void) {
  int n;
	scanf("%d", &n);
	if (n >= 0) printf("valor absoluto: %d\n", n);
	else        printf("valor absoluto: %d\n", -n);
	return 0;
}
