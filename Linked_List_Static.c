//Static Way....
#include<stdio.h>
#include <stdlib.h>

struct linked{
	int n;
	struct linked *next;
};

typedef struct linked node;

int main()
{
	node *head,no1,no2,no3;
	head=(node *)malloc(sizeof(node));
	head=&no1;
	
	no1.n=10;
	no1.next=&no2;
	
	no2.n=20;
	no2.next=(node *)malloc(sizeof(node));
	no2.next=&no3;
	
	no3.n=15;
	no3.next=NULL;
	
	printf("%d %d %d",no1.n,no2.n,no3.n);
	return 0;
}
