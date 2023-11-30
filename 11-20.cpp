#include<bits/stdc++.h>
using namespace std;

char* reverse(char cou[100], char recou[100]) 
{	
	int len = strlen(cou);
	for(int i = 0; i < len; i++)
		recou[i] = cou[len - 1 - i];
	return recou;.0
	
	
}

int main()
{
//freopen("in.text", "r", stdin);
//freopen("out.text", "w", stdout);
	char a[100] = {'\0'}, b[100] = {'\0'}, cou[100] = {'\0'}, recou[100] = {'\0'};
	int i, len, sho, x, y, f;
	while(scanf("%s %s", a, b), 0 != strcmp(a, "0") || 0 != strcmp(b, "0"))
	{
		f = 0;
		if(strlen(a) < strlen(b)) swap(a, b);
		len = strlen(a), sho = strlen(b);
		for(i = 1; i <= len; i++)
		{
			x = a[len - i] - '0';
			if(i <= sho) y = b[sho - i] - '0';
			else y = 0;
			cou[i - 1] = (x + y + f) % 10 + '0';
			if((x + y + f) > 9) f = 1;
			else f = 0;
		}
		puts(reverse(cou, recou));
		memset(a, '\0', sizeof(a));
		memset(b, '\0', sizeof(b));
		memset(cou, '\0', sizeof(cou));
		memset(recou, '\0', sizeof(recou));
	}
	puts("0");
	return 0;
}
