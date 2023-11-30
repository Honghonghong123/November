//#include<bits/stdc++.h>
//using namespace std;
//
//#define Name_Max 21
//#define Ph_Max 12
//#define Max 20
//#define Goal_Max 3
//#define Bir_Max 3
//
//typedef struct Stu
//{
//	char name[Name_Max];
//	char ph[Ph_Max];
//	char sex;
//	double goal[Goal_Max];
//	double sum;
//	int bir[Bir_Max];
//	double ave;	
//}Stu;
//typedef struct Ph
//{
//	Stu peo[Max];
//	int size;
//}Ph;
//
//
//void ref(Ph * p)
//{
//	memset(p , 0, sizeof(Ph));
//}
////Ωªªª
//void sswap(Ph *p, int i, int j)
//{
//	swap(p->peo[j].name, p->peo[i].name);
//	swap(p->peo[j].ph, p->peo[i].ph);
//	swap(p->peo[j].sex, p->peo[i].sex);
//	swap(p->peo[j].goal[0], p->peo[i].goal[0]);
//	swap(p->peo[j].goal[1], p->peo[i].goal[1]);
//	swap(p->peo[j].goal[2], p->peo[i].goal[2]);
//	swap(p->peo[j].bir[0], p->peo[i].bir[0]);
//	swap(p->peo[j].bir[1], p->peo[i].bir[1]);
//	swap(p->peo[j].bir[2], p->peo[i].bir[2]);
//	swap(p->peo[j].ave, p->peo[i].ave);
//	swap(p->peo[j].sum, p->peo[i].sum);
//}
//void print(Ph *p, int i)
//{
//	printf("%s %s %c %d %d %d %.1lf %.1lf %.1lf %.1lf %.1lf\n",
//	p -> peo[i].ph,
//	p -> peo[i].name,
//	p -> peo[i].sex,
//	p -> peo[i].bir[0],
//	p -> peo[i].bir[1],
//	p -> peo[i].bir[2],
//	p -> peo[i].goal[0],
//	p -> peo[i].goal[1],
//	p -> peo[i].goal[2],
//	p -> peo[i].ave,
//	p -> peo[i].sum);
//} 
////≤Â»Î 
//void Insert(Ph * p)
//{
//	printf("Insert:\n");
//	char name[Name_Max], ph[Ph_Max], sex;
//	double goal[Goal_Max];
//	int bir[Bir_Max];
//	scanf("%s %s %c %d %d %d %lf %lf %lf", ph, name, &sex, &bir[0], &bir[1], &bir[2], &goal[0], &goal[1], &goal[2]);
//	for(int i = 0; i < p -> size; i++)
//	{
//		if(strcmp(p->peo[i].ph, ph) == 0)
//		{
//			printf("Failed\n");
//			return ;
//		}
//	}
//	strcpy(p->peo[p -> size].name, name);
//	strcpy(p->peo[p -> size].ph, ph);
//	p -> peo[p -> size].sex = sex;
//	p -> peo[p -> size].bir[0] = bir[0];
//	p -> peo[p -> size].bir[1] = bir[1];
//	p -> peo[p -> size].bir[2] = bir[2];
//	p -> peo[p -> size].goal[0] = goal[0];
//	p -> peo[p -> size].goal[1] = goal[1];
//	p -> peo[p -> size].goal[2] = goal[2];
//	p -> peo[p -> size].sum = goal[0] + goal[1] + goal[2];
//	p -> peo[p -> size].ave = p -> peo[p -> size].sum / Goal_Max;
//	print(p, p -> size);
//	p -> size++;
//}
////≤È’“
//void Find(Ph * p)
//{
//	printf("Find:\n");
//	char ph[Ph_Max];
//	scanf("%s", ph);
//	for(int i = 0; i < p -> size; i++)
//	{
//		if(strcmp(p->peo[i].ph, ph) == 0)
//		{
//			print(p, i);
//			return ;
//		}
//	}
//	printf("Failed\n");
//}
//void Change(Ph * p)
//{
//	printf("Change:\n");
//	char newname[Name_Max], ph[Ph_Max], sex;
//	double goal[Goal_Max];
//	int bir[Bir_Max];
//	scanf("%s %s %c %d %d %d %lf %lf %lf", ph, newname, &sex, &bir[0], &bir[1], &bir[2], &goal[0], &goal[1], &goal[2]);
//	for(int i = 0; i < p->size; i++)
//	{
//		if(strcmp(p->peo[i].ph, ph) == 0)
//		{
//			strcpy(p->peo[i].name, newname);
//			p -> peo[i].sex = sex;
//			p->peo[i].goal[0] = goal[0];
//			p->peo[i].goal[1] = goal[1];
//			p->peo[i].goal[2] = goal[2];
//			p->peo[i].bir[0] = bir[0];
//			p->peo[i].bir[1] = bir[1];
//			p->peo[i].bir[2] = bir[2];
//			p->peo[i].sum = goal[0] + goal[1] + goal[2];
//			p->peo[i].ave = p->peo[i].sum / Goal_Max;
//			print(p, i);
//			return;
//		}	
//	}
//	printf("Failed\n");
//}
//void List(Ph * p)
//{
//	printf("List:\n");
//	for(int i = 0; i < p -> size; i++) print(p, i);
//}
//void Delete(Ph * p)
//{
//	printf("Delete:\n");
//	char ph[Name_Max];
//	scanf("%s", ph);
//	for(int i = 0; i < p -> size; i++)
//	{
//		if(strcmp(p->peo[i].ph, ph) == 0)
//		{
//			for(int j = i; j < p->size - 1; j++) sswap(p, j, j + 1);
//			p -> size--;
//			printf("Deleted\n");
//			return ;	
//		}
//	}
//	printf("Failed\n");
//}
//void Sort_bysum(Ph *p)
//{
//	printf("Sort:\n");
//	for(int i = 0; i < p -> size; i++)
//		for(int j = i + 1; j < p -> size; j++)
//			if(p->peo[i].sum > p->peo[j].sum) sswap(p, i, j);
//	for(int i = 0; i < p -> size; i++) print(p, i);
//}
//void Sort_byid(Ph *p)
//{
//	printf("Sort:\n");
//	for(int i = 0; i < p -> size; i++)
//		for(int j = i + 1; j < p -> size; j++)
//			if(strcmp(p->peo[i].ph, p->peo[j].ph) > 0) sswap(p, i, j);
//	for(int i = 0; i < p -> size; i++) print(p, i);
//}
//void Sort_bybirthday(Ph *p)
//{
//	printf("Sort:\n");
//	for(int i = 0; i < p -> size; i++)
//	{
//		for(int j = i + 1; j < p -> size; j++)
//		{
//			if(p->peo[i].bir[0] > p->peo[j].bir[0]) sswap(p, i, j);
//			else if(p->peo[i].bir[0] == p->peo[j].bir[0])
//			{
//				if(p->peo[i].bir[1] > p->peo[j].bir[1]) sswap(p, i, j);
//				else if(p->peo[i].bir[1] == p->peo[j].bir[1]) if(p->peo[i].bir[2] > p->peo[j].bir[2]) sswap(p, i, j);
//			}
//		}		
//	}
//	for(int i = 0; i < p -> size; i++) print(p, i);
//}
//
//int main()
//{	
//freopen("in.text","r", stdin);
//freopen("out.text", "w", stdout);
//	Ph p;
//	ref(&p);
//	char input[10];
//	while(scanf("%s", input), 1)
//	{
//		if(strcmp(input, "Insert") == 0)
//		{
//			Insert(&p);
//		}
//		else if(strcmp(input, "Delete") == 0)
//		{
//			Delete(&p);
//		}
//		else if(strcmp(input, "Find") == 0)
//		{
//			Find(&p);
//		}
//		else if(strcmp(input, "Change") == 0)
//		{
//			Change(&p);
//		}
//		else if(strcmp(input, "List") == 0)
//		{
//			List(&p);
//		}
//		else if(strcmp(input, "Sort") == 0)
//		{
//			scanf("%s", input);
//			if(strcmp(input, "byid") == 0) Sort_byid(&p);
//			else if(strcmp(input, "bybirthday") == 0) Sort_bybirthday(&p);
//			else if(strcmp(input, "bysum") == 0) Sort_bysum(&p);
//		}
//		else if(strcmp(input, "Quit") == 0 || strcmp(input, "Exit") == 0)
//		{
//			printf("Good bye!\n");
//			break;
//		}	
//	}	
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int g(int x)
//{
//	int i, num;
//	num = 0;
//	for(i = 1; i <= x; i++)
//	{
//		if(x % i == 0) num++;
//	}
//	return num;
//}
//int main()
//{
//	int row, n, m, num, k, j;
//	scanf("%d", &row);
//	while(row--)
//	{
//		scanf("%d%d", &n, &m);
//		num = INT_MIN;
//		for(int i = n; i <= m; i++)
//		{
//			j = g(i);
//			if(num < j) num = j, k = i;
//		}
//		printf("%d\n", k);
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int A(char x)
//{
//	if('a' <= x && x <= 'z') return 1;
//	else if('A' <= x && x <= 'Z') return 1;
//	else if(x == '_') return 1;
//	else return 0;
//}
//int B(char x)
//{
//	if('0' <= x && x <= '9') return 1;
//	else return 0;
//}
//int main()
//{
//	int row, i, f;
//	string str;
//	scanf("%d",&row);
//	getchar();
//	while(row--)
//	{
//		f = 0;
//		getline(cin, str);
//		if(0 == A(str[0]))
//			printf("no\n"), f++;
//		for(i = 1; i < str.size(); i++)
//		{
//			if(f == 0 && 0 == A(str[i]) && 0 == B(str[i]))
//			{	
//				printf("no\n");
//				f++;
//				break;
//			}
//		}		
//		if(0 == f) printf("yes\n");
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	char str[201], max;
//	int i;
//	while(scanf("%s",&str) != EOF)
//	{
//		max = str[0];
//		i = 1;
//		while(str[i++] != '\0')
//			if(str[i] > max) max = str[i];
//		i = 0;
//		while(str[i] != '\0')
//		{
//			if(str[i] == max) printf("%c(max)",str[i++]);
//			else printf("%c",str[i++]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n, i, j;
//	double v, b, num, sum, a, arr[2][10000];
//	scanf("%lf%d", &v, &n);
//	for(i = 0; i < n; i++)
//	{
//		scanf("%lf%lf", &a, &b);
//		arr[0][i] = a;
//		arr[1][i] = b / a;
//	}
//	for(i = 0; i < n; i++)
//		for(j = i + 1; j < n; j++)
//			if(arr[1][i] < arr[1][j])
//			{
//				swap(arr[1][i], arr[1][j]);
//				swap(arr[0][i], arr[0][j]);
//			}
//	num = 0, sum = 0, i = 0;
//	while(num < v)
//	{
//		if(num + arr[0][i] <= v) sum += arr[0][i] * arr[1][i];
//		else sum += arr[1][i] * (v - num);
//		num += arr[0][i++];
//		if(i == n) break;
//	}
//	printf("%.2lf\n", sum);
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int row, col, i, j;
//	double max, arr[51][51] = {0};
//	scanf("%d%d", &row, &col);
//	for(i = 0; i < row; i++)
//	{
//		for(j = 0; j < col; j++) scanf("%lf", &arr[i][j]);
//		max = arr[i][0];
//		for(j = 1; j < col; j++) max = max > arr[i][j] ? max : arr[i][j];
//		for(j = 0; j < col; j++) arr[i][j] /= max;
//	}
//	for(i = 0; i < row; i++)
//	{
//		for(j = 0; j < col; j++)
//		{
//			if(0 == j) printf("%.2lf", arr[i][j]);
//			else printf(" %.2lf", arr[i][j]);
//		}
//		puts("");
//	}	
//	return 0;
//}












































