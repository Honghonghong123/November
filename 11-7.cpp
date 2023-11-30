#include<bits/stdc++.h> 
using namespace std;
int syear(int year)
{
	if(0 == year % 4 && 0 != year % 100 || 0 == year % 400) return 1;
	else return 0;
}
int main()
{
	int n, i, day, month;
	int num[7];
	int year[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	while(scanf("%d", &n) != EOF)
	{
		day = 0;
		for(i = 0; i < 7; i++) num[i] = 0;
		for(i = 0; i < n; i++)
		{
			month = 0;
			if(1 == syear(i + 1900)) year[1] = 29;
			else year[1] = 28;
			while(month < 12)
			{
				num[(day + 13 ) % 7]++;
				day = (day + year[month]) % 7;
				month++;
			}
		}
		printf("%d %d %d %d %d %d %d\n", num[6], num[0], num[1], num[2], num[3], num[4], num[5]);
	}
	return 0;
}
