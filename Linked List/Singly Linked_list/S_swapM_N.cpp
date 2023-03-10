#include<iostream>
#include<malloc.h>
using namespace std;
///creating the structure
struct Node
{
	int data;
	Node *next;    //inter-referential pointer
};
Node *first , *temp , *ttemp , *p , *q , *r , *s;    //global variable declaration

///initialization
void init()
{
	first=temp=ttemp = NULL;
}
void create_first(int x)
{
	//dynamic memory allocation at first pointer 
	first = (Node *)malloc(sizeof(Node));
	///adding first node 
	first->data=x;
	first->next=NULL;
}
///adding  other nodes 
void add_nodes(int x)
{
	temp=first;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	//creating  another memory location for  other nodes
	ttemp=(Node *)malloc(sizeof(Node));
	ttemp->data=x;
	ttemp->next= NULL;
	temp->next=ttemp;
}

///swap Mth and Nth nodes
void swap(int m, int n)
{
	temp=ttemp=first;
	int i,j;
	for(i=1; i<m; i++)
	{
		p=temp;
		temp=temp->next;	
	}	
	for(j=1; j<n; j++)
	{
		q=ttemp;
		ttemp=ttemp->next;
	}
	r=temp->next;
	s=ttemp->next;
	p->next=ttemp;
	temp->next=s;
	q->next=temp;
	ttemp->next=r;
}

//displaying the  linked list
void  disp()
{
	temp=first;
	while(temp!=NULL)
	{
		std::cout<<"\n"<<temp->data;
		temp=temp->next;
	}
}
///driver code
int main()
{
	init();
	create_first(10);
	add_nodes(20);
	add_nodes(30);
	add_nodes(40);
	add_nodes(50);
	add_nodes(60);
	add_nodes(70);
	add_nodes(80);
	add_nodes(90);
	disp();
	std::cout<<"\n\n after swapping";
	swap(3,8);
	disp();
}
