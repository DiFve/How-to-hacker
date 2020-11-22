#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int pow(int x, int y)
{
	int sum = 1;
	if (y == 0)	return 1;
	if (y > 0)
	{
		for (int i = 0; i < y; i++)
		{
			sum *= x;
		}
	}
	return sum;
}
int strlen(char* word)
{
	int i = 0;
	while (word[i] != '\0')
	{
		i++;
	}
	return i;
}
int main()
{
	char pass[99999];
	scanf("%[^\n]", pass);
	long n = strlen(pass), num[9999], sum = 0, temp = 0;
	int i = 0, j = 0;
	for (i = 0; i < n; i++)
	{
		while (pass[i] >= '0' && pass[i] <= '9')
		{
			num[j] = pass[i] - 48;
			j++;
			i++;
		}
		for (int k = 0; k < j; k++)
		{
			//printf("%ld ",j);
			temp += num[k] * (pow(10, (j - k - 1)));

		}
		sum += temp;

		temp = 0;
		j = 0;
	}
	printf("%ld ", sum);
	return 0;
}