#include<stdio.h>
#include<conio.h>
int main()
{
int arr[50],i,j,t,n;
clrscr();
printf("how many elements you want?");
scanf("%d",&n);
printf("enter elements of array");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1;j++)
{
if(arr[j]>arr[j+1])
{
t=arr[j];
arr[j]=arr[j+1];
arr[j+1]=t;
}
}
}
printf("\n sorted array elements are\n");
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
getch();
return 0;
}
