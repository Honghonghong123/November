#include<bits/stdc++.h>
using namespace std;
int main()
{
	string ss("afsdg");
	char arr[10] = "qwrr";
	string s = "ads";
const char * str = NULL;
	
//	s = arr;
//	s.assign(ss.begin(), ss.end() - 1);

//	swap(s, ss);
//	s.swap(ss);

//	s = ss;
//	cout << s.size() << endl;
//	s.resize(2);
//	cout << s.size() << endl;
	
//	ss.copy(arr, 1, 3);//存储的位置， 字符数， pos 
//	str = ss.c_str();
//	str = ss.data();
	
//	s.append(ss.begin(), ss.end());
	
//	s.insert(1, arr, 2);

//	s = ss.substr(2, 1);
	s.replace(1, 2, arr, 2);
	
//	string a(6, 'a');
//	string a = arr 和 str;

//	s.append(arr, 1);
//	cout << s << endl;
//	s.assign(ss.begin(), ss.end());
	
//	s.insert(s.begin() + 2, 6, 'a');
//	s.resize(5);
//	s = "621";
//	s.replace(s.begin(), s.end(), arr, 2 n  );
//	int a = ss.find_first_of(s);
	cout << s << endl;
	return 0;
}

	int n, m, i, left, a, right, mid;
	scanf("%d %d", &n, &m);
	for(i = 0; i < n; i++) scanf("%d", &arr[i]);
	for(i = 0; i < m; i++)
	{
		scanf("%d", &a);
		left = 0, right = n - 1;
		while(left <= right)
		{
			mid = (left + right) / 2;
			if(arr[mid] <= a) left = mid + 1;
			else right = mid - 1;
		}
		printf("%d\n", arr[right]);
	}
