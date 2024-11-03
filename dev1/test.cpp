#include<stdio.h>
int add(int *p); 
int add(int *p)
{
	(*p)++;
	return *p;
}

int main()
{
	int p;
	scanf("%d",&p);
	add(&p);
	printf("%d",p);
	return 0;
}
