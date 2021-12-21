//IMPLEMATION OF STATIC STACK
#include<stdio.h>
#include<conio.h>
#define max 20
struct stack
{
  int data[max];
  int top;
  };
  /*function for initialize a stack*/
  void init(struct stack *s)
  {
  s->top=-1;
  }
  /*function for checking stack is empty or not*/
  int isEmpty(struct stack *s)
  {
  if(s->top==-1)
  return 1;
  else
  return 0;
  }
  /*function for checking stack is full or not */
  int isFull(struct stack *s)
  {
    if(s->top==max-1)
    return 1;
    else
    return 0;
    }
    /*add element to the stack*/
    void push(struct stack *s,int item)
    {
    s->data[++s->top]=item;
    }
    /*pop item from the stack*/
    int pop(struct stack*s)

    {
    return(s->data[s->top--]);


    }
    /*display stack*/
    void dispitems(struct stack *s)
    {
    int i;
    if(s->top==-1)
    {
    printf("stack is empty");return;
    }
    for(i=s->top;i>=0;i--)
    printf("%d->",s->data[i]);
    printf("\n");

    }
    void main()
    {
    struct stack s1; /*structure stack variable s1 is created*/
    int ch,x;
    init(&s1);
    do
    {
     printf("1-push\n2-pop\n");
     printf("enter your choice\n");
     scanf("%d,&ch");
     switch(ch)
     {
     case 1:if(isFull(&s1))
     printf("stack is full\n");
     else
     {
       printf("enter elements to be push into stack\n");
       scanf("%d",&x);
       push(&s1,x);
       printf("\nstack elements:");
       dispitems(&s1);
       }

       break;
       case 2: if(isEmpty(&s1))
       printf("stack is empty\n");
       else
       printf("popped elements is:%d\n",pop(&s1));
       printf("\nstack elements:");
       dispitems(&s1);
       break;
	 }
	}
	 while(ch>0 && ch<3);
      }
