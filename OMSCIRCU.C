
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct node
{
int data;
struct node *next;
struct node *prev;
}*newnode,*head,*tail,*t;
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
newnode->next=newnode;
tail=newnode;
t=newnode;
}
else
{
tail->next=newnode;
newnode->next=t;
tail=newnode;
}
printf("do you want to create another\n");
ch=getch();
}while(ch!='n');
}
void display()
{
struct node *t1;
printf("linked list is");
t1=head;
while(t1->next!=t)
{
printf("%d",t1->data);
t1=t1->next;
}
printf("%d",t1->data);
}
void insert_b()
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter data");
scanf("%d",&newnode->data);
newnode->next=head;
head=newnode;
t=newnode;
tail->next=newnode;
}
void insert_e()
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter data");
scanf("%d",&newnode->data);
tail->next=newnode;
newnode->next=t;
tail=newnode;
}
void insert_p()
{
int i=1,c=0,p;
struct node *t2;
t2=head;
while(t2->next!=t)
{
c++;
t2=t2->next;
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
}
else if(p>c)
{
printf("invalid input.");
}
else
{
t2=head;
while(i<p-1)
{
t2=t2->next;
i++;
}
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter data");
scanf("%d",&newnode->data);
newnode->next=t2->next;
t2->next=newnode;
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

