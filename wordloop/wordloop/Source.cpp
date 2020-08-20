#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int strlen(char* word)
{
	int i = 0;
	while (word[i] != '\0')
	{
		i++;
	}
	return i;
}

void wordloop(char* word, int wordlen, int shuffle)
{
	for (int i = 0; i < shuffle % wordlen; i++)
	{
		char temp = word[0];
		//word[wordlen]=word[0];
		for (int j = 0; j < wordlen; j++)
		{
			word[j] = word[j + 1];
		}
		word[wordlen - 1] = temp;
	}
}
int main()
{
	char word[9999];
	int n;
	scanf("%[^\n]", &word);
	scanf("%d", &n);
	int len = strlen(word);
	wordloop(word, len, n);
	printf("%s", word);
	return 0;
}