#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,sum=0;
printf("Enter the limit of natural:");
scanf("%d",&n);
for(i=1;i<=n;i++) 
{
sum+=(2*i);
}
printf("the sum of first %d even numbers :%d ",n,sum);
return 0;
}
