#include <stdio.h>
#include "std.h"

int main() {
	int a, b;
	printf("Enter integer A and integer B from keyboard\n");
	scanf("%d", &a);
	scanf("%d", &b);
	printf("The sum of A and B is %b", a + b);
	return 0;
}