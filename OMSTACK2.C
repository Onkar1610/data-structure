#include<stdio.h>
#include<conio.h>
#define max 20
typedef struct stack
{
int data[max];
int top;
}stack;

void init(stack *);
void push(stack *,int);
int pop(stack *);
int isFull(stack *);
int isEmpty(stack *);
void display(stack *);

void init(stack *s)
{
s->top=-1;
printf("\n Stack initialised successfully..");
}

void push(stack *s,int x)
{
s->top=s->top+1;
s->data[s->top]=x;
}

int pop(stack *s)
{
int x;
x=s->data[s->top];
s->top=s->top-1;
return x;
}

int isFull(stack *s)
{
if(s->top==max-1)
return 1;
else
return 0;
}

int isEmpty(stack *s)
{
if(s->top==-1)
return 1;
else
return 0;
}
void display(stack *s)
{
 int i;
 for(i=s->top;i>=0;i--)
 {
 printf("  %d  ",s->data[i]);
 }
}
void main()
{
struct stack *s;
int x,ch,i;
clrscr();
do
{
printf("\n1. Initialise \n2. Push \n3. Pop \n4. isFull \n5. isEmpty \n6. Display \n7. Exit");
printf("\n Enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
init(&s);
break;

case 2:
if(isFull(&s))
printf("\n Cannot insert an element.. OVERFLOW...");
else
{
printf("\n Enter the data to insert ..");
scanf("%d",&x);
push(&s,x);
}
break;

case 3:
if(isEmpty(&s))
printf("\n Cannot delete an element.. UNDERFLOW...");
else
{
x=pop(&s);
printf("\n Element popped.. %d",x);
}
break;

case 4:
if(isFull(&s))
printf("\n Stack is Full...");
else
printf("\n Stack is not Full...");
break;

case 5:
if(isEmpty(&s))
printf("\n Stack is Empty..");
else
printf("\n Stack is not empty..");
break;

case 6:
printf("\n Stack Contents:");
display(&s);
break;

}
}while(ch!=7);
}
