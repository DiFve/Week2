#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void sort_(int* num, int n)
{
	int temp, min = 999999;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (num[i] < num[j])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	return;
}

int main()
{
	int n;
	scanf("%d", &n);
	int num[9999];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}
	sort_(num, n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", num[i]);
	}
	return 0;
}