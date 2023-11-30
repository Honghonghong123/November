//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//freopen("in.text", "r", stdin);
//freopen("out.text", "w", stdout);
//	int row, n, i, j, t;
//	int arr[2][1000] = {0};
//	double  sum;
//	scanf("%d",&row);
//	while(row--)
//	{
//		scanf("%d",&n);
//		for(i = 0; i < n; i++)
//		{
//			scanf("%d",&arr[0][i]);
//			arr[1][i] = i + 1;
//		}
//		for(i = 0; i < n; i++)
//			for(j = i + 1; j < n; j++)
//			{
//				if(arr[0][i] > arr[0][j])
//				{
//					swap(arr[0][i], arr[0][j]);
//					swap(arr[1][i], arr[1][j]);
//				}
//				else if(arr[0][i] == arr[0][j])
//					if(arr[1][i] > arr[1][j]) swap(arr[1][i], arr[1][j]);
//			}				
//		t = arr[0][0];
//		sum = 0;
//		for(i = 0; i < n; i++)
//		{
//			if(i == 0) printf("%d",arr[1][i]);
//			else printf(" %d",arr[1][i]);
//			if(i > 0)
//			{
//				sum += t;
//				t += arr[0][i];
//			}
//		}
//	printf("\n%.2lf\n",sum / n);
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;

#define Id_Max 30
#define Name_Max 30
#define Edu_Max 30
#define Add_Max 30
#define Tel_Max 30

typedef struct Stu
{
	char id[Id_Max];
	char name[Name_Max];
	char sex;
	int age;
	char edu[Edu_Max];
	double wage;
	char add[Add_Max];
	char tel[Tel_Max];
	Stu * next;
}Stu;
//void ini(Stu * h)
//{
//	memset(*h, 0, sizeof(Stu));
//}

Stu * Createlist()
{
	Stu *p;
	p = (Stu *) malloc (sizeof(Stu));
	p -> next = NULL;
	return p;
}
void Creatnode(Stu * s)
{
	s -> next = NULL;
	scanf("%s %s %c %d %s %lf %s %s",
	s -> id, s -> name, &s -> sex, &s -> age, s -> edu,
	&s -> wage, s -> add, s -> tel);
}
void Insert(Stu *h, Stu *s)
{
	Stu *p = h;
	while(p -> next)
	{
		if(0 == strcmp(p -> id, s -> id))
		{
			printf("Failed\n");
			return;
		}
		p = p -> next;
	}		
	p -> next = s;
	printf("Inserted\n");
}
void sswap(Stu * s1, Stu *s2)
{
	swap(s1->id, s2->id);
	swap(s1->name, s2->name);
	swap(s1->sex, s2->sex);
	swap(s1->age, s2->age);
	swap(s1->edu, s2->edu);
	swap(s1->wage, s2->wage);
	swap(s1->add, s2->add);
	swap(s1->tel, s2->tel);
}
void rank(Stu *h)
{
	Stu *p, *pre;
	pre = h;
	while(pre -> next)
	{
		p = pre -> next;
		while(p)
		{
			if(pre -> wage > p -> wage) sswap(pre, p);
			else if(pre -> wage == p -> wage)
				if(0 < strcmp(pre -> id, p -> id)) sswap(pre, p);
			p = p -> next;
		}
		pre = pre -> next;
	}			
}
void Print(Stu *s) 
{
	printf("%s %s %c %d %s %.2lf %s %s\n", s -> id, s -> name, s -> sex, s -> age, s -> edu, s -> wage, s -> add, s -> tel);
}
void Sort(const Stu *h)
{
	Stu *p = (Stu *)h -> next;
	rank(p);
	while(p)
		Print(p), p = p -> next;
}
void Find(Stu *h) 
{
	Stu *p = h -> next;
	rank(p);
	int num = 0;
	char sign;
	double wage;
	scanf(" %c %lf", &sign, &wage);
	if('>' == sign)
	{
		while(p)
		{
			if(wage < p -> wage) Print(p), num++;
			p = p -> next;
		}
		if(0 == num) printf("NOT FIND\n");
	}
	else if('<' == sign)
	{
		while(p)
		{
			if(wage > p -> wage) Print(p), num++;
			p = p -> next;
		}
		if(0 == num) printf("NOT FIND\n");
	}
	else if('=' == sign)
	{
		while(p)
		{
			if(wage == p -> wage) Print(p), num++;
			p = p -> next;
		}
		if(0 == num) printf("NOT FIND\n");
	}
}
void View(Stu *h)
{
	Stu *p = h;
	char id[Id_Max];
	scanf("%s", id);
	while(p)
	{
		if(0 == strcmp(p -> id, id))
		{
			Print(p);
			return;
		}
		p = p -> next;
	}
	printf("Failed\n");
}
void Delete(Stu *h)
{
	Stu *p = h -> next;
	Stu *pre = h;
	char id[Id_Max];
	scanf("%s", id);
	while(p)
	{
		if(0 == strcmp(p -> id, id))
		{
			pre -> next = p -> next;
			free(p);
			p = NULL;
			printf("Deleted\n");
			return;
		}
		pre = p;
		p = p -> next;
	}
	printf("Failed\n");
}
void Change(Stu *h)
{
	Stu *p = h -> next;
	char id[Id_Max], newid[Id_Max], name[Name_Max], sex, edu[Edu_Max], add[Add_Max], tel[Tel_Max];
	int age;
	double wage;
	scanf("%s %s %s %c %d %s %lf %s %s",
	id, newid, name, &sex, &age, edu, &wage, add, tel);
	while(p)
	{
		if(0 == strcmp(p -> id, id))
		{
			strcpy(p -> id, id);
			strcpy(p -> name, name);
			strcpy(p -> edu, edu);
			strcpy(p -> add, add);
			strcpy(p -> tel, tel);
			p -> sex = sex;
			p -> wage = wage;
			p -> age = age;
			printf("Changed\n");
			return;
		}
		p = p -> next;
	}
	printf("Failed\n");
}

int main()
{
freopen("in.text", "r", stdin);
freopen("out.text", "w", stdout);
	char input[10];
	Stu *h, *s;
	h = Createlist();
	while(scanf("%s", input), 1)
	{
		if(0 == strcmp(input, "INSERT"))
		{
			s = (Stu *) malloc (sizeof(Stu));
			Creatnode(s);
			Insert(h, s);		
		}
		else if(0 == strcmp(input, "VIEW"))
		{
			View(h);
		}
		else if(0 == strcmp(input, "FIND"))
		{
			Find(h);
		}
		else if(0 == strcmp(input, "SORT"))
		{
			Sort(h);
		}
		else if(0 == strcmp(input, "DELETE"))
		{
			Delete(h);
		}
		else if(0 == strcmp(input, "CHANGE"))
		{
			Change(h);
		}
		else if(0 == strcmp(input, "QUIT") || 0 == strcmp(input, "EXIT"))
		{
			printf("Good bye!\n");
			break;
		}
	}
	return 0;
}




































































































