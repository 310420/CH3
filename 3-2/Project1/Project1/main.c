#include<stdio.h>
#include<stdlib.h>

long int factorial(int p);


int main(void)
{
	int n,m;
	long int ans;
	long int a, b, c;

	printf("求排列組合C(m,n)\n");
	printf("m=");
	scanf("%d", &m);
	printf("n=");
	scanf("%d", &n);
	a = recursive_factorial(m);
	b = recursive_factorial(n);
	c = recursive_factorial(m - n);
	ans = a / (b*c);
	printf("C(%d,%d)=%d\n", m, n, ans);
	system("pause");
}
long int recursive_factorial(int p)
{
	if (p > 1)
	{
		long int result = p*recursive_factorial(p - 1);
		return result;
	}
	else
	{
		return 1;
	}
}
