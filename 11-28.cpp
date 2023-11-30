//扣1分 
//#include<bits/stdc++.h>
//using namespace std;
//
//int arr[1000];
//
//int main()
//{
//	int n, i, cout1, cout2, cout3, max, f, num4;
//	double cout4;
//	
//	cout1 = cout2 = cout3 = f = num4 = 0;
//	max = INT_MIN;
//	cout4 = 0;
//	scanf("%d", &n);
//	for(i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if(0 == arr[i] % 5 && 0 == arr[i] % 2) cout1 += arr[i];
//		if(1 == arr[i] % 5) cout2 += pow(-1, f++) * arr[i];
//		if(2 == arr[i] % 5) cout3 ++;
//		if(3 == arr[i] % 5) num4 ++, cout4 += arr[i];
//		if(4 == arr[i] % 5) max = max > arr[i] ? max : arr[i];
//	}
//	if(cout1) printf("%d", cout1);	
//	else printf("N");
//	if(cout2) printf(" %d", cout2);
//	else printf(" N");
//	if(cout3) printf(" %d", cout3);
//	else printf(" N");
//	if(cout4) printf(" %.1f", cout4 / num4);
//	else printf(" N");
//	if(max != INT_MIN) printf(" %d\n", max);
//	else printf(" N\n");
//			
//	return 0;
//}

//扣4分 
//#include<bits/stdc++.h>
//using namespace std;
//
//int dug(char ch)
//{
//	if(ch == ',' || ch == '.' || ch == '-' || ('A' <= ch && ch <= 'Z') 
//	|| '0' <= ch && ch <= '9') return 1;
//	if(ch == '_') return 2;
//	if(ch == '+') return 3;
//}
//
//int main()
//{
//	int f = 0, i, j, num = 0;
//	string arr, str;
//	char ch;
//	while(ch = getchar(), ch != '\n')
//	{
//		if(1 == dug(ch)) arr.push_back(ch);
//		if(2 == dug(ch)) arr.push_back(' ');
//		if(3 == dug(ch)) f = -1;
//	}
//	getline(cin, str);
//	for(i = 0; i < str.size(); i++)
//	{
//		if(-1 == f && 'A' <= str[i] && str[i] <= 'Z') continue;
//		for(j = 0; j < arr.size(); j++)
//			if(str[i] == arr[j] || str[i] - 32 == arr[j]) break;
//		if(str[i] == arr[j] || str[i] - 32 == arr[j]) continue;
//		else putchar(str[i]), num++;
//	}
//	if(!num) puts("");
//	
//	return 0;
//}


//黑洞问题 
#include<bits/stdc++.h>
using namespace std;

string Big(string x)
{
	for(int i = 0; i < x.size(); i++)
		for(int j = i + i; j < x.size(); j++)
			if(x[i] < x[j]) swap(x[i], x[j]);
//	sscanf(x.c_str(), "%d", &a);
	return x;
}
string Sml(string x)
{
	for(int i = 0; i < x.size(); i++)
		for(int j = i + i; j < x.size(); j++)
			if(x[i] > x[j]) swap(x[i], x[j]);
//	sscanf(x.c_str(), "%d", &a);
	return x;
}

int main()
{
	int  z, f, n, x, y;
	string a, big, sml;
	char b[1000];
	cin >> a;
	f = 0;
	n = 1;
	do
	{
		if(f++) a = to_string(cut);
		big = Big(a), sml = Sml(a);
		sscanf(big.c_str(), "%d", &x);
		sscanf(sml.c_str(), "%d", &y);
		z = x - y;
		cut = to_string(z);
		cout << big << " - " << sml << " = " << cut << endl;
	}while(n--);
//	如果 N 的 4 位数字全相等，则在一行内输出 N - N = 0000；
//	否则将计算的每一步在一行内输出，直到 6174 作为差出现，
	return 0;
}















































 
