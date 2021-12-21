
#include<stdio.h>
int main()
{
int i,f,l,m,n,s;
int a[50];
clrscr();
printf("\n enter number of elements");
scanf("%d",&n);
printf("\n enter elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n enter element to search");
scanf("%d",&s);
f=0;
l=n-1;
m=(f+l)/2;
while(f<=l)
{
if(a[m]<s)
{
f=m+1;
}
else if(a[m]==s)
{
printf("\n %d found at index %d and position %d",s,m,m+1);
break;
}
else
{
l=m-1;
m=(f+l)/2;
}
}
if(f>l)
{
printf("\n %d is not present in array",s);
}
getch();
return 0;
}

