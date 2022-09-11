#include<stdio.h>
int max(int n, int m) {
	int x;
	if (n > m) {
		x = n;
	}
	else
		x = m;
	return x;
}
int main() {//65010536
	int a, b, c;
	printf("enter first number : ");
	scanf_s("%d", &a);
	printf("enter second number : ");
	scanf_s("%d", &b);
	c = max(a, b);
	printf("Result = %d", c);
	return 0;
}