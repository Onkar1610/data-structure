
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct node
{
int data;
struct node *next;
struct node *prev;
}*newnode,*head,*tail;
void create()
{
char ch;
do
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter data");
scanf("%d",&newnode->data);
newnode->next=NULL;
if(head==NULL)
{
head=newnode;
tail=newnode;
}
else
{
tail->next=newnode;
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
while(t!=NULL)
{
printf("%d",t->data);
t=t->next;
}
}
void insert_b()
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter data");
scanf("%d",&newnode->data);
newnode->next=head;
head=newnode;
}
void insert_e()
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter data");
scanf("%d",&newnode->data);
tail->next=newnode;
newnode->next=NULL;
tail=newnode;
}
void insert_p()
{
int i=1,c=0,p;
struct node *t;
t=head;
while(t!=NULL)
{
c++;
t=t->next;
}
printf("length is %d \n enter the position.\n",c);
scanf("%d",&p);
if(p>c)
{
printf("invalid input.");
}
else
{
t=head;
while(i<p)
{
t=t->next;
i++;
}
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter data");
scanf("%d",&newnode->data);
newnode->next=t->next;
t->next=newnode;
}
}
void del_b()
{
struct node *t;
t=head;
head=head->next;
head->prev=NULL;
free(t);
}
void del_e()
{
struct node *t,*pn;
t=head;
while(t->next!=NULL)
{
pn=t;
t=t->next;
}
pn->next=NULL;
tail=pn;
free(t);
}
void del_p()
{
  int i=1,c=0,p;
struct node *t,*ne;
t=head;
while(t!=NULL)
{
c++;
t=t->next;
}
printf("length is %d \n enter the position.\n",c);
scanf("%d",&p);
if(p==1)
{
del_b();
}
else if(p==c)
{
del_e();
}
else if(p>c)
{
printf("invalid input.");
}
else
{
t=head;
while(i<p)
{
ne=t;
t=t->next;
i++;
}
ne->next=t->next;
t->next->prev=ne;
free(t);
}
}
void main()
{
int n;
clrscr();
while(1)
{
printf("\n 1.create\n2.display\n3.insert at begin\n4.insert at end \n5.insert at position\n6.delete from begin.\n7.delete from end.\n 8.delete from position\n 9.exit\n");
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
case 6: del_b();
break;
case 7: del_e();
break;
case 8: del_p();
break;
case 9: exit(0);
break;
default:printf("invalid input\n");
}
}
}