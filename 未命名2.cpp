#include<bits/stdc++.h>
using namespace std;

//bool isprime(int x)
//{
//	if(x <= 1) return false;
//	if(x == 2) return true;
//	for(int i = 2; i <= sqrt(x) + 1; i++)
//	{
//		if(!(x % i)) return false;
//	}
//	return true;
//}

//埃氏筛 
//int arr[100005];
//
//int main()
//{
//	int n, i, a, j, num = 0;
//	cin >> n;
//	
//	a = sqrt(n) + 1;
//	for(i = 2; i <= a; i++)
//		if(!arr[i])
//			for(j = i * i; j <= n; j += i) arr[j] = 1;
//	if(n > 4) num++;
//	for(i = 1; i * 6 + 1 <= n; i++)
//	{
//		if(!(arr[i * 6 - 1]) && !(arr[i * 6 + 1])) num++;
//	}
//	cout << num << endl;
//	return 0;
//}


//线性筛 一定范围的打印 还是全打印 不同的打印方式 
//int a[10005];
//int primes[10005]; 
//
//void print(int n)
//{
//	int i , j, cnt;
//	j = cnt = 0;
//	for(int i = 2; i <= n; i++)
//	{
//		if(!a[i]) primes[cnt++] = i;
//		for(j = 0; primes[j] <= n / i; j++)
//		{
//			a[primes[j] * i] = 1;
//			if(i % primes[j] == 0) break;
//		}
//	}
//}
//
//int main()
//{
//	int n, i;
//	cin >> n;
//	print(n);
//	
//	//全打印 
//	i = 0;
//	while(primes[i] &&  i <= n) cout << primes[i++] << endl;
//	
//	return 0;
//} 

//int arr[1000000];
//
//int main()
//{
//	int n, m, i;
//	cin >> n >> m;
//	for(i = 0; i < n; i++) cin >> arr[(i + m) % n];
//	for(i = 0; i < n; i++)
//	{
//		if(i) cout << " " << arr[i];
//		else cout << arr[i];
//	}
//	puts("");
//	
//	return 0;
//} 


//vector<int> ans;
//int main()
//{
//	int a, b;
//	while(cin >> a >> b)
//	{
//		if(a && b)
//		{
//			ans.push_back(a * b);
//			ans.push_back(b - 1);
//		}
//	}
//	if(ans.size())
//	{
//		for(int i = 0; i < ans.size(); i++)
//		{
//			cout << ans[i];
//			if(i + 1 != ans.size()) cout << " ";
//		}
//	}
//	else cout << "0 0";
//	return 0;
//}

int main()
{
	string str = "abc";
	string s = "qwer";
	str.insert(str.begin() + 1, 5, 'y');

	char arr[5] = "def";
	str.replace(str.begin(), str.end() - 1, arr);
//	str += arr;
	cout << str <<endl;
	cout << s << endl;
	return 0;
}






































