#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,j,k;
int n1=0;
int n2=1;
printf("Enter the limit:");
scanf("%d",&n);
printf("%d ",n1);
for(i=1;i<=n;i++) 
{
j=n1+n2;
printf("%d ",j);
n1=n2;
n2=j;
}
return 0;
}
