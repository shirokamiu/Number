#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 20

int change10(int n)
{
	int sum = 0;
	int i = 1;
	while (n > 0)
	{
		int j = n % 10;
		sum += i * j;
		n /= 10;
		i *= 7;
	}
	return sum;
}

int change6(int n)
{
	int sum = 0;
	int i = 1;
	while (n > 0)
	{
		int j = n % 6;
		sum += i * j;
		n /= 6;
		i *= 10;
	}
	return sum;
}

int main()
{
	int n;
	int N7[SIZE] = { 0 };
	int sum = 0;
	int i = 0;
	int s6;
	printf("2から20までの値を入力せよ:");
	scanf("%d", &n);
	if (n < 2 || n > SIZE)
	{
		printf("エラー、もう一度入力してください\n");
	}
	for (i = 0; i < n; i++)
	{
		scanf("%d", &N7[i]);
		int s7 = change10(N7[i]);
		sum += s7;
	}
	s6 = change6(sum);
	printf("%d\n", s6);

	return 0;
}