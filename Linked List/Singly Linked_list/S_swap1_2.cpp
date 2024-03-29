#include<iostream>
#include<malloc.h>
struct Node
{
	int data;
	Node *next;
};
Node  *first , *temp , *ttemp, *p;

///initialization
void init()
{
	first=temp=ttemp=NULL;
}

//create first node
void  create_first(int x)
{
	first=(Node *)malloc(sizeof(Node));
	first->data=x;
	first->next=NULL;
}

///adding  nodes
void addnodes(int x)
{
	temp=first;
	while(temp->next!=NULL)
	   temp=temp->next;
	///creating node
	ttemp=(Node *)malloc(sizeof(Node));
	ttemp->data=x;
	ttemp->next=NULL;
	temp->next=ttemp;
}

///swap 1st and  2nd nodes
void swap()
{
	temp=first;
	ttemp=temp->next;
	p=ttemp->next;
	temp->next=p;
	ttemp->next=first;
	first=ttemp;
}
//display
void disp()
{
	temp=first;
	while(temp!=NULL)
	{
		std::cout<<"\n"<<temp->data;
		temp=temp->next;
	}
}

//driver code
int main()
{
	init();
	create_first(10);
	addnodes(20);
	addnodes(30);
	addnodes(40);
	addnodes(50);
	addnodes(60);
	addnodes(70);
	disp();	
	std::cout<<"\n after swapping";
	swap();
	disp();
}

