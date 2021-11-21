#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
    struct Stu
	{
	char name[20];
	 int age;
	 double score;
	};
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
	struct book
	{
		char name[20];
		float price;
		char id[30];

	};
int main()
{
	struct Stu s = { "ÕÅÈý",20,85.5 };
	printf("%s %d %1f\n", s.name, s.age, s.score);
	struct Stu* ps = &s;
	printf("%s  %d %1f\n", (*ps).name, (*ps).age, (*ps).score);
	printf("%s %d %1f\n", ps->name, ps->age, ps->score);
	




	return 0;
}