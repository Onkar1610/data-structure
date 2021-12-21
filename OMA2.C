#include<stdio.h>
#include<conio.h>
int main()
{
int arr[50],i,j,t,n;
clrscr();
printf("how many elements to enter");
scanf("%d",&n);
printf("enter elements");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=1;i<n;i++)
{
t=arr[i];
j=i-1;
while(j>=0 && arr[j]>t)
{
arr[j+1]=arr[j];
j--;
}
arr[j+1]=t;
}
printf("\n sorted array elements are:\n");
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
getch();
return 0;
}



