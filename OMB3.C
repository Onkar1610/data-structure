#include<stdio.h>
int main()
{
int a[20],k,n,i;
clrscr();
printf("how many elements to enter");
scanf("%d",&n);
printf("\n enter elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n enter number to search");
scanf("%d",&k);
for(i=0;i<n;i++)
{
if(a[i]==k)
{
printf("\n %d is present at index %d\n",k,i);
break;
}
if(i==n)
{
printf("%d is not present in array.",k);
}
}
getch();
return 0;
}

