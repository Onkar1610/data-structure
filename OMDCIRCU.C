
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct node
{
int data;
struct node *next;
struct node *prev;
}*newnode,*head,*tail,*tem;
void create()
{
char ch;
do
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter data");
scanf("%d",&newnode->data);
newnode->prev=newnode;
newnode->next=newnode;
if(head==NULL)
{
head=newnode;
tail=newnode;
tem=newnode;
}
else
{
tail->next=newnode;
newnode->prev=tail;
newnode->next=tem;
tem->prev=newnode;
tail=newnode;
}
printf("do you want to create another\n");
ch=getch();
}while(ch!='n');
}
void display()
{
struct node *t;
printf("linked list is");
t=head;
while(t->next!=tem)
{
printf("%d",t->data);
t=t->next;
}
printf("%d",t->data);
}

void insert_b()
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter data");
scanf("%d",&newnode->data);
head->prev=newnode;
newnode->next=head;
head=newnode;
newnode->prev=tail;
tail->next=newnode;
tem=newnode;
}
void insert_e()
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter data");
scanf("%d",&newnode->data);
tail->next=newnode;
newnode->prev=tail;
newnode->next=tem;
tail=newnode;
}
void insert_p()
{
int i=1,c=0,p;
struct node *t;
t=head;
while(t->next!=tem)
{
c++;
t=t->next;
}
c=c+1;
printf("length is %d \n enter the position.\n",c);
scanf("%d",&p);
if(p==1)
{
 insert_b();
}
else if(p==c)
{
insert_e();
}else if(p>c)
{
printf("invalid input.");
}
else
{
t=head;
while(i<(p-1))
{
t=t->next;
i++;
}
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter data");
scanf("%d",&newnode->data);
newnode->prev=t;
newnode->next=t->next;
t->next=newnode;
newnode->next->prev=newnode;
}
}
void main()
{
int n;
clrscr();
while(1)
{
printf("\n 1.create\n2.display\n3.insert at begin\n4.insert at end \n5.insert at position\n6.exit\n");
scanf("%d",&n);
printf("chose the above:\n");
switch(n)
{
case 1: create();
break;
case 2: display();
break;
case 3: insert_b();
break;
case 4: insert_e();
break;
case 5: insert_p();
break;
case 6:exit(0);
break;
default:printf("invalid input\n");
}
}
}
