#include <stdio.h>
int gcd(int x, int y);
int main(void)
{
	int a, b, big, small;

	printf("Enter two umbers: ");
	scanf("%d %d", &a, &b); 

	if (a < b){
		big = b;
		small = a;
	}
	else {
		big = a;
		small = b;
	}

	printf("%d와  %d의 최대공약수는 %d\n", a, b, gcd(a, b));

}
int gcd(int x, int y)
{
	int k;

	if (x % y != 0)
		return gcd(y, x % y);
	else if (x % y == 0)
		return y;
}