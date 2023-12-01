#include<bits/stdc++.h>
using namespace std;

int dug(char ch)
{
	if(ch == ',' || ch == '.' || ch == '-' || ('A' <= ch && ch <= 'Z') 
	|| '0' <= ch && ch <= '9') return 1;
	if(ch == '_') return 2;
	if(ch == '+') return 3;
}

int main()
{
	int f = 0, i, j, num = 0;
	string arr, str;
	char ch;
	while(ch = getchar(), ch != '\n')
	{
		if(1 == dug(ch)) arr.push_back(ch);
		if(2 == dug(ch)) arr.push_back(' ');
		if(3 == dug(ch)) f = -1;
	}
	getline(cin, str);
	for(i = 0; i < str.size(); i++)
	{
		if(-1 == f && 'A' <= str[i] && str[i] <= 'Z') continue;
		for(j = 0; j < arr.size(); j++)
			if(str[i] == arr[j] || toupper(str[i]) == arr[j]) break;
		if(str[i] == arr[j] || toupper(str[i]) == arr[j]) continue;
		else putchar(str[i]), num++;
	}
	if(!num) puts("");
	return 0;
}
