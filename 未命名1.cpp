#include<bits/stdc++.h> 
using namespace std;

const int N = 1e4;//根据题意确定范围 
bool b[N];//用来存储已出现的 数 
int a[105];//用来存储输入数据，根据题意确定范围
vector<int> ans;//存储 key

int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		int x = a[i];
		while(x != 1)
		{
			if(x & 1) x = x * 3 + 1, x /= 2;
			else x /= 2;
			b[x] = true;
		}
	}
	for(int i = 0; i < n; i ++) if(!b[a[i]]) ans.push_back(a[i]);
	sort(ans.begin(), ans.end(), greater<int>());
	for(int i = 0; i < ans.size(); i++)
	{
		if(i) cout << " " << ans[i];
		else cout << ans[i];
	}
	cout << endl;
	return 0;
}

//黑洞问题 
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string n;
	int a, b;
	cin >> n;
	while(1)
	{
		while(n.size() < 4) n = "0" + n;
		sort(n.begin(), n.end());
		a = stoi(n);
		reverse(n.begin(), n.end());
		b = stoi(n);
		if(a == b)
		{
			printf("%04d - %04d = 0000\n", b, a);
			break;
		}
		if(b - a == 6174)
		{
			printf("%04d - %04d = 6174\n", b, a);
			break;
		}
		printf("%04d - %04d = %04d\n", b, a, b - a);
		n = to_string(b - a);
	}
	return 0;
}

//科学计数法 
#include<bits/stdc++.h>
using namespace std;
string s, ans, temp;
bool f;
int step1, step2;
int sum;

void slove()
{
	if(!f) reverse(ans.begin(), ans.end());
	if(sum >= ans.size())
	{
		temp += ans;
		for(int i = 1; i <= sum - ans.size(); i++) temp += '0';
		if(!f) temp += ".0";			
	}
	else
	{
		for(int i = 0; i < sum; i++) temp += ans[i];
		temp += '.';
		for(int i = sum; i <= ans.size(); i++) temp += ans[i];
	}		
	if(!f) reverse(temp.begin(), temp.end());
	cout << temp << endl;
}

int main()
{
	cin >> s;
	if(s[0] == '-') cout << '-';
	s = s.substr(1);//去符号位 
	
	ans += s[0];//添加小数点的前一位
	s = s.substr(2);//去小数点及其前一位 
	
	for(int i = 0; s[i] != 'E'; i++) ans += s[i];
	
	if(s.find('-') != -1) step2 = ans.size() - 1, sum = stoi(s.substr(s.find('-') + 1)), sum += step2;
	else f = true, step1 = 1, sum = stoi(s.substr(s.find('+') + 1)), sum += step1;
	slove();
	return 0;
}



