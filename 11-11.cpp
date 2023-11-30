//#include<bits/stdc++.h>
//using namespace std;
//
//#define Id_Max 30
//#define Name_Max 30
//#define Edu_Max 30
//#define Add_Max 30
//#define Tel_Max 30
//
//typedef struct Stu
//{
//	char id[Id_Max];
//	char name[Name_Max];
//	char sex;
//	double x, y, z; 
//	Stu * next;
//}Stu;
//
//Stu * Createlist()
//{
//	Stu *p;
//	p = (Stu *) malloc (sizeof(Stu));
//	p -> next = NULL;
//	return p;
//}
//void Creatnode(Stu * s)
//{
//	s -> next = NULL;
//	scanf("%s %s %c %lf %lf %lf",
//	s -> id, s -> name, &s -> sex, &s -> x, &s -> y, &s -> z);
//}
//void Print(const Stu *s) 
//{
//	printf("%s %s %c %.1f %.1f %.1f\n", s -> id, s -> name, s -> sex, s -> x, s -> y, s -> z);
//}
//void Insert(Stu *h, Stu *s)
//{
//	puts("Insert:");
//	Stu *p = h;
//	while(p -> next)
//	{
//		if(0 == strcmp(p -> id, s -> id))
//		{
//			printf("Failed\n");
//			return;
//		}
//		p = p -> next;
//	}		
//	p -> next = s;
//	Print((Stu* )s);
//}
//void Sort(const Stu *h)
//{
//	puts("List:");
//	Stu *p = (Stu *)h -> next;
//	while(p)
//		Print(p), p = p -> next;
//}

//
//int main()
//{
//	char input[10];
//	Stu *h, *s;
//	h = Createlist();
//	while(scanf("%s", input), 1)
//	{
//		if(0 == strcmp(input, "Insert"))
//		{
//			s = (Stu *) malloc (sizeof(Stu));
//			Creatnode(s);
//			Insert(h, s);		
//		}
//		else if(0 == strcmp(input, "List"))
//		{
//			Sort(h);
//		}
//		else if(0 == strcmp(input, "Quit") || 0 == strcmp(input, "Exit"))
//		{
//			printf("Good bye!\n");
//			break;
//		}
//	}
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//
//#define Id_Max 30
//#define Name_Max 30
//#define Edu_Max 30
//#define Add_Max 30
//#define Tel_Max 30
//
//typedef struct Stu
//{
//	char id[Id_Max];
//	char name[Name_Max];
//	char sex;
//	double x, y, z; 
//	Stu * next;
//}Stu;
//
//Stu * Createlist()
//{
//	Stu *p;
//	p = (Stu *) malloc (sizeof(Stu));
//	p -> next = NULL;
//	return p;
//}
//void Creatnode(Stu * s)
//{
//	s -> next = NULL;
//	scanf("%s %s %c %lf %lf %lf",
//	s -> id, s -> name, &s -> sex, &s -> x, &s -> y, &s -> z);
//}
//void Print(const Stu *s) 
//{
//	printf("%s %s %c %.1f %.1f %.1f\n", s -> id, s -> name, s -> sex, s -> x, s -> y, s -> z);
//}
//void Insert(Stu *h, Stu *s)
//{
//	puts("Insert:");
//	Stu *p = h;
//	while(p -> next)
//	{
//		if(0 == strcmp(p -> id, s -> id))
//		{
//			printf("Failed\n");
//			return;
//		}
//		p = p -> next;
//	}		
//	p -> next = s;
//	Print((Stu* )s);
//}
//void Sort(const Stu *h)
//{
//	puts("List:");
//	Stu *p = (Stu *)h -> next;
//	while(p)
//		Print(p), p = p -> next;
//}
//Stu* Find(const Stu *h)
//{
//	puts("Find:");
//	char id[Id_Max];
//	scanf("%s", id);
//	Stu *p = (Stu *)h -> next;
//	while(p)
//	{
//		if(0 == strcmp(id, p -> id)) return p;
//		p = p -> next;
//	}
//	return NULL;
//}
//
//int main()
//{
////freopen("in.text", "r", stdin);
////freopen("out.text", "w", stdout);
//	char input[10];
//	Stu *h, *s;
//	h = Createlist();
//	while(scanf("%s", input), 1)
//	{
//		if(0 == strcmp(input, "Insert"))
//		{
//			s = (Stu *) malloc (sizeof(Stu));
//			Creatnode(s);
//			Insert(h, s);		
//		}
//		else if(0 == strcmp(input, "List"))
//		{
//			Sort(h);
//		}
//		else if(0 == strcmp(input, "Find"))
//		{
//			Stu *f = Find(h);
//			if(f) Print(f);
//			else puts("Failed");
//		}
//		else if(0 == strcmp(input, "Quit") || 0 == strcmp(input, "Exit"))
//		{
//			printf("Good bye!\n");
//			break;
//		}
//	}
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//
//#define Id_Max 30
//#define Name_Max 30
//#define Edu_Max 30
//#define Add_Max 30
//#define Tel_Max 30
//
//typedef struct Stu
//{
//	char id[Id_Max];
//	char name[Name_Max];
//	char sex;
//	double x, y, z; 
//	Stu * next;
//}Stu;
//
//Stu * Createlist()
//{
//	Stu *p;
//	p = (Stu *) malloc (sizeof(Stu));
//	p -> next = NULL;
//	return p;
//}
//void Creatnode(Stu * s)
//{
//	s -> next = NULL;
//	scanf("%s %s %c %lf %lf %lf",
//	s -> id, s -> name, &s -> sex, &s -> x, &s -> y, &s -> z);
//}
//void Print(const Stu *s) 
//{
//	printf("%s %s %c %.1f %.1f %.1f\n", s -> id, s -> name, s -> sex, s -> x, s -> y, s -> z);
//}
//void Insert(Stu *h, Stu *s)
//{
//	puts("Insert:");
//	Stu *p = h;
//	while(p -> next)
//	{
//		if(0 == strcmp(p -> id, s -> id))
//		{
//			printf("Failed\n");
//			return;
//		}
//		p = p -> next;
//	}		
//	p -> next = s;
//	Print((Stu* )s);
//}
//void Sort(const Stu *h)
//{
//	puts("List:");
//	Stu *p = (Stu *)h -> next;
//	while(p)
//		Print(p), p = p -> next;
//}
//Stu* Find(const Stu *h)
//{
//	puts("Find:");
//	char id[Id_Max];
//	scanf("%s", id);
//	Stu *p = (Stu *)h -> next;
//	while(p)
//	{
//		if(0 == strcmp(id, p -> id)) return p;
//		p = p -> next;
//	}
//	return NULL;
//}
//void Change(Stu *h)
//{
//	puts("Change:");
//	char id[Id_Max];
//	scanf("%s", id);
//	Stu *p = (Stu *)h -> next;
//	while(p)
//	{
//		if(0 == strcmp(id, p -> id))
//		{
//			scanf("%s %c %lf %lf %lf", p -> name, &p -> sex, &p -> x, &p -> y, &p -> z);
//			Print(p);
//			return;
//		}
//		p = p -> next;
//	}
//	puts("Failed");
//}
//
//int main()
//{
//	char input[10];
//	Stu *h, *s;
//	h = Createlist();
//	while(scanf("%s", input), 1)
//	{
//		if(0 == strcmp(input, "Insert"))
//		{
//			s = (Stu *) malloc (sizeof(Stu));
//			Creatnode(s);
//			Insert(h, s);		
//		}
//		else if(0 == strcmp(input, "List"))
//		{
//			Sort(h);
//		}
//		else if(0 == strcmp(input, "Change"))
//		{
//			Change(h);
//		}
//		else if(0 == strcmp(input, "Find"))
//		{
//			Stu *f = Find(h);
//			if(f) Print(f);
//			else puts("Failed");
//		}
//		else if(0 == strcmp(input, "Quit") || 0 == strcmp(input, "Exit"))
//		{
//			printf("Good bye!\n");
//			break;
//		}
//	}
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//
//#define Id_Max 30
//#define Name_Max 30
//#define Edu_Max 30
//#define Add_Max 30
//#define Tel_Max 30
//
//typedef struct Stu
//{
//	char id[Id_Max];
//	char name[Name_Max];
//	char sex;
//	double x, y, z; 
//	Stu * next;
//}Stu;
//
//Stu * Createlist()
//{
//	Stu *p;
//	p = (Stu *) malloc (sizeof(Stu));
//	p -> next = NULL;
//	return p;
//}
//void Creatnode(Stu * s)
//{
//	s -> next = NULL;
//	scanf("%s %s %c %lf %lf %lf",
//	s -> id, s -> name, &s -> sex, &s -> x, &s -> y, &s -> z);
//}
//void Print(const Stu *s) 
//{
//	printf("%s %s %c %.1f %.1f %.1f\n", s -> id, s -> name, s -> sex, s -> x, s -> y, s -> z);
//}
//void Insert(Stu *h, Stu *s)
//{
//	puts("Insert:");
//	Stu *p = h;
//	while(p -> next)
//	{
//		if(0 == strcmp(p -> id, s -> id))
//		{
//			printf("Failed\n");
//			return;
//		}
//		p = p -> next;
//	}		
//	p -> next = s;
//	Print((Stu* )s);
//}
//void Sort(const Stu *h)
//{
//	puts("List:");
//	Stu *p = (Stu *)h -> next;
//	while(p)
//		Print(p), p = p -> next;
//}
//Stu* Find(const Stu *h)
//{
//	puts("Find:");
//	char id[Id_Max];
//	scanf("%s", id);
//	Stu *p = (Stu *)h -> next;
//	while(p)
//	{
//		if(0 == strcmp(id, p -> id)) return p;
//		p = p -> next;
//	}
//	return NULL;
//}
//void Change(Stu *h)
//{
//	puts("Change:");
//	char id[Id_Max];
//	scanf("%s", id);
//	Stu *p = (Stu *)h -> next;
//	while(p)
//	{
//		if(0 == strcmp(id, p -> id))
//		{
//			scanf("%s %c %lf %lf %lf", p -> name, &p -> sex, &p -> x, &p -> y, &p -> z);
//			Print(p);
//			return;
//		}
//		p = p -> next;
//	}
//	puts("Failed");
//}
//void Delete(Stu *h)
//{
//	puts("Delete:");
//	char id[Id_Max];
//	scanf("%s", id);
//	Stu *p = (Stu *) h -> next;
//	Stu *pre = (Stu *) h;
//	while(p)
//	{
//		if(0 == strcmp(id, p -> id))
//		{
//			pre -> next = p -> next;
//			free(p);
//			p = NULL;
//			puts("Deleted");
//			return;
//		}
//		p = p -> next;
//		pre = pre -> next;
//	}
//	puts("Failed");
//}
//
//int main()
//{
//	char input[10];
//	Stu *h, *s;
//	h = Createlist();
//	while(scanf("%s", input), 1)
//	{
//		if(0 == strcmp(input, "Insert"))
//		{
//			s = (Stu *) malloc (sizeof(Stu));
//			Creatnode(s);
//			Insert(h, s);		
//		}
//		else if(0 == strcmp(input, "List"))
//		{
//			Sort(h);
//		}
//		else if(0 == strcmp(input, "Change"))
//		{
//			Change(h);
//		}
//		else if(0 == strcmp(input, "Delete"))
//		{
//			Delete(h);
//		}
//		else if(0 == strcmp(input, "Find"))
//		{
//			Stu *f = Find(h);
//			if(f) Print(f);
//			else puts("Failed");
//		}
//		else if(0 == strcmp(input, "Quit") || 0 == strcmp(input, "Exit"))
//		{
//			printf("Good bye!\n");
//			break;
//		}
//	}
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//
//#define Id_Max 30
//#define Name_Max 30
//#define Edu_Max 30
//#define Add_Max 30
//#define Tel_Max 30
//
//typedef struct Stu
//{
//	char id[Id_Max];
//	char name[Name_Max];
//	char sex;
//	double x, y, z; 
//	Stu * next;
//}Stu;
//
//Stu * Createlist()
//{
//	Stu *p;
//	p = (Stu *) malloc (sizeof(Stu));
//	p -> next = NULL;
//	return p;
//}
//void Creatnode(Stu * s)
//{
//	s -> next = NULL;
//	scanf("%s %s %c %lf %lf %lf",
//	s -> id, s -> name, &s -> sex, &s -> x, &s -> y, &s -> z);
//}
//void Print(const Stu *s) 
//{
//	printf("%s %s %c %.1f %.1f %.1f\n", s -> id, s -> name, s -> sex, s -> x, s -> y, s -> z);
//}
//void Insert(Stu *h, Stu *s)
//{
//	puts("Insert:");
//	Stu *p = h;
//	while(p -> next)
//	{
//		if(0 == strcmp(p -> next -> id, s -> id))
//		{
//			printf("Failed\n");
//			return;
//		}
//		p = p -> next;
//	}		
//	p -> next = s;
//	Print((Stu* )s);
//}
//void sswap(Stu * s1, Stu *s2)
//{
//	swap(s1->id, s2->id);
//	swap(s1->name, s2->name);
//	swap(s1->sex, s2->sex);
//	swap(s1->x, s2->x);
//	swap(s1->y, s2->y);
//	swap(s1->z, s2->z);
//}
//void Rank(Stu *h)
//{
//	Stu *pre = h -> next;	
//	while(pre)
//	{
//		Stu *p = pre -> next;
//		while(p)
//		{
//			if(0 < strcmp(pre -> id, p -> id)) sswap(pre, p);
//			p = p -> next;
//		}
//		pre = pre -> next;
//	}
//}
//void Sort(const Stu *h)
//{
//	puts("List:");
//	Rank((Stu *)h);
//	Stu *p = (Stu *)h -> next;
//	while(p)
//		Print(p), p = p -> next;
//}
//Stu* Find(const Stu *h)
//{
//	puts("Find:");
//	char id[Id_Max];
//	scanf("%s", id);
//	Stu *p = (Stu *)h -> next;
//	while(p)
//	{
//		if(0 == strcmp(id, p -> id)) return p;
//		p = p -> next;
//	}
//	return NULL;
//}
//void Change(Stu *h)
//{
//	puts("Change:");
//	char id[Id_Max];
//	scanf("%s", id);
//	Stu *p = (Stu *)h -> next;
//	while(p)
//	{
//		if(0 == strcmp(id, p -> id))
//		{
//			scanf("%s %c %lf %lf %lf", p -> name, &p -> sex, &p -> x, &p -> y, &p -> z);
//			Print(p);
//			return;
//		}
//		p = p -> next;
//	}
//	puts("Failed");
//}
//void Delete(Stu *h)
//{
//	puts("Delete:");
//	char id[Id_Max];
//	scanf("%s", id);
//	Stu *p = (Stu *) h -> next;
//	Stu *pre = (Stu *) h;
//	while(p)
//	{
//		if(0 == strcmp(id, p -> id))
//		{
//			pre -> next = p -> next;
//			free(p);
//			p = NULL;
//			puts("Deleted");
//			return;
//		}
//		p = p -> next;
//		pre = pre -> next;
//	}
//	puts("Failed");
//}
//
//int main()
//{
//	char input[10];
//	Stu *h, *s;
//	h = Createlist();
//	while(scanf("%s", input), 1)
//	{
//		if(0 == strcmp(input, "Insert"))
//		{
//			s = (Stu *) malloc (sizeof(Stu));
//			Creatnode(s);
//			Insert(h, s);		
//		}
//		else if(0 == strcmp(input, "List"))
//		{
//			Sort(h);
//		}
//		else if(0 == strcmp(input, "Change"))
//		{
//			Change(h);
//		}
//		else if(0 == strcmp(input, "Delete"))
//		{
//			Delete(h);
//		}
//		else if(0 == strcmp(input, "Find"))
//		{
//			Stu *f = Find(h);
//			if(f) Print(f);
//			else puts("Failed");
//		}
//		else if(0 == strcmp(input, "Quit") || 0 == strcmp(input, "Exit"))
//		{
//			printf("Good bye!\n");
//			break;
//		}
//	}
//	return 0;
//}
