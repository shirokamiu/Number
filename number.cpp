#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 20

/*
    N個の自然数 A1,A2,…ANが7進数で、標準入力から入力される。
    それらの和を、6進数で標準出力に出力せよ。

    2 <= N <= 20
    1 <= Ai <= 1000
*/

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
	printf("2から20までの値を入力せよ:\n");
	scanf("%d", &n);
	printf("1から1000までの%d個数を入力せよ:\n", n);
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