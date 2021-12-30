//DYNAMIC IMPLEMATION OF QUEUE
#include<conio.h>
#include<stdlib.h>
struct queue
{
  int data;
  struct queue *next;
  }
  *front,*rear;
  void insertQ(int n)
  {
   struct queue *temp;
   temp=(struct queue*)malloc(sizeof(struct queue));
   temp->data=n;
   temp->next=NULL;
   if(front == NULL)
   rear=front=temp;
   else
   {
     rear->next=temp;
     rear=temp;
     }
    }
     int deleteQ()
     {
       int x;
       struct queue *temp=front;
       x=front->data;
       if(front==rear)
	front=rear=NULL;
	else
	 front=front->next;
	 free(temp);
	 return(x);
       }
       void display()
       {
	struct queue *temp=front;
	printf("\nqueue contents are:\t");
	while(temp)
	{
	printf("%d\t",temp->data);
	temp=temp->next;
	}
       }
	void main()
	{
	 int ch,x;
	 do
	 {
	  printf("\n1-insert\n2-delete\n");
	  printf("enter your choice\n");
	  scanf("%d",&ch);
	  switch(ch)
	 {
	  case1:printf("enter element to be insert\n");
	  scanf("%d,&x");
	  insertQ(x);
	  display();
	  break;
	  case2:if(front==NULL)
	  printf("queue is empty\n");
	  else
	  {
	   printf("deleted element is %d\n",deleteQ());
	   display();
	   }
	   break;
	   }
	  }
	  while(ch>0 && ch<3);
	}