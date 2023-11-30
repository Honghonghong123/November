#include<bits/stdc++.h>
using namespace std;

#define Id_Max 20

typedef struct Stu
{
	char id[Id_Max];
	double score;
	struct Stu* next;
}Stu;
void Printf(const Stu *s)
{
	printf("%s %.2f\n", s -> id, s -> score);
}
Stu *Creatlist()
{
	Stu *h = (Stu *) malloc (sizeof(Stu));
	h -> next = NULL;
	return h;
}
void Creatnode(Stu &s)
{
	scanf("%s %lf", s.id, &s.score);
	s.next = NULL;
}
Stu* Judge(Stu *h, Stu *s)
{
	Stu *p = h -> next;
	while(p)
	{
		if(0 == strcmp(p -> id, s -> id)) return p;
		p = p -> next;
	}
	return NULL;
}
void Insert(Stu *h, Stu *s)
{
	Stu *p = h;
	while(p -> next) p = p -> next;
	p -> next = s;
}
void List(const Stu *h)
{
	Stu *p = (Stu *)h -> next;
	while(p)
	{
		Printf(p);
		p = p -> next;
	}
}

int main()
{
	string order;
	Stu *h, *s;
	h = Creatlist();
	while(getline(cin, order), 1)
	{
		if("INSERT" == order)
		{
			s = (Stu *) malloc (sizeof(Stu));
			Creatnode(*s);
			//if(!Judge(h, s)) ;
			//else 
			//{
				Insert(h, s);
				Printf(s);
			//}			
		}
		else if("LIST" == order)
			List(h);
		else if("QUIT" == order)
		{
			puts("Good bye!");
			break;
		}
		
	}
	return 0;
}









































































