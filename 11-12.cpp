#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(scanf("%d", &n) != EOF)
	{
		int i, k, divided, divide;
		vector<int> arr (n);
		vector<int> arr1 (n);
		for(i = 0; i < n; i++)
		{
			scanf("%d", arr[i]);
		}
		k = 0;
		for(i = 1; i < n; i++)
		{
			divided = arr[i];
			divide = arr[i - 1];
			while(divided % divide)
			{
				divided = divide;
				divide = divided % divide;
			}
			arr1[k++] = divide;
		}
		
	}
	return 0;
} 
