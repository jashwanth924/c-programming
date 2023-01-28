#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,sum=0,j,k;
printf("Enter the limit of natural:");
scanf("%d",&n);
for(i=1;i<=n;i++) 
{
j=i*i*i;
sum+=j;
}
printf("the sum of cube of first %d numbers :%d ",n,sum);
return 0;
}

