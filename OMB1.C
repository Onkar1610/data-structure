#include<stdio.h>
#include<conio.h>
int quick(int a[20],int lb,int ub)
{
int pvot,s,e,l,t;
if(lb<ub)
{ pvot=lb,s=lb,e=ub;
while(s<e)
{
while(a[s]<=a[pvot]&& s<e)
{
s++;
}
while(a[e]>a[pvot])
{
e--;
}
if(s<e)
{
t=a[s];
a[s]=a[e];
a[e]=t;
}
}
t=a[pvot];
a[pvot]=a[e];
a[e]=t;
quick(a,lb,e-1);
quick(a,e+1,ub);
}
}
int main()
{
int a[20],n,i,lb,ub;
clrscr();
printf("how many elements to enter");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
quick(a,lb=0,ub=n-1);
printf("after sorting");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
getch();
return 0;
}
