#include<iostream>
#include<malloc.h>
struct Node
{
	int data;
	Node *next;
};
Node  *first , *temp , *ttemp , *p;

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

///delete node before a node
void del_before(int x)
{
	temp=first;
	while(temp->next->data!=x)
	{
		p=temp;
		temp=temp->next;
	}
	ttemp=temp->next;
	p->next=ttemp;
	temp->next=NULL;
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
	std::cout<<"\n after deletion";
	del_before(40);
	disp();
}

