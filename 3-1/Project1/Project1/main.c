#include<stdio.h>
#include<stdlib.h>
int odd(int U);
int even(int U);
int totalsum(int U);

int main(void)
{
	int n, sum;
	char add;
	printf("1+2+...+n=?請輸入n=");
	scanf("%d", &n);
	printf("請問要做奇數和(O),偶數和(E),還是整數和(I)?請選擇:");
	scanf("%s", &add);

	switch (add)
	{
	case'O':
		sum = odd(n);
		break;
	case'E':
		sum = even(n);
		break;
	case'I':
		sum = totalsum(n);
		break;

	default:
		printf("選擇錯誤\n");
		return -1;
	}
	printf("總合為%d\n", sum);
	system("pause");
	return 0;
}

int odd(int U)
{
	int i, tota = 0;
	for ( i = 1; i <= U; i++)
		if (i % 2 == 1)
			tota = tota + i;
	return tota;
}

int even(int U)
{
	int i, tota = 0;
	for (i = 1; i <= U; i++)
		if (i % 2 == 0)
			tota = tota + i;
	return tota;
}

int totalsum(int U)
{
	return odd(U) + even(U);
}
