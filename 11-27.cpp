//#include<bits/stdc++.h>
//using namespace std;
//
//int arr[10];
//char str[50];
//
//int main()
//{
//	int i, j, k = 0;
//	for(i = 0; i < 10; i++) scanf("%d", &arr[i]);
//	j = 1;
//	for(j = 1; j < 10; j++)
//		if(arr[j] != 0) break;
//	str[k++] = j + '0';
//	arr[j]--;
//	for(i = 0; i < 10; i++)
//		while(arr[i])
//		{
//			str[k++] = i + '0';
//			arr[i]--;
//		}
//	printf("%s\n", str);
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, c = 0;
	while(scanf("%d %d", &a, &b), b)
	{
		if(c++ && b) printf(" ");
		printf("%d %d", a * b, b - 1);
	}
	puts("");
	return 0;
} 





























