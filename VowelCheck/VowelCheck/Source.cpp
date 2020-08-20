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

int main()
{
	int check = 0;
	char word[9999];
	scanf("%[^\n]", &word);
	int n = strlen(word);
	for (int i = 0; i < n; i++)
	{
		if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U')
			check = 1;
	}
	if (check)	printf("There is vowel");
	else 	printf("There is not vowel");
	return 0;
}