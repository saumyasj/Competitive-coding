#include<bits/stdc++.h>
using namespace std;
char str[50];

int main()
{
	int i;
	scanf("%s", &str[1]);
	for (i = 1; str[i]; ++i)
	{
		if (str[i] == '?') {
			if (str[i-1] != 'a' && str[i+1] != 'a') 
			{
				str[i] = 'a';
			} else 
			{
				str[i] = 'b';
			}
		}
	}
	printf("%s\n", &str[1]);
}
