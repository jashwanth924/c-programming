#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,sum=0,j,k;
printf("Enter the limit of natural:");
scanf("%d",&n);
for(i=1;i<=n;i++) 
{
sum+=i;
}
j=sum/n;
printf("the average of sum of %d natural number = %d",n,j);
return 0;
}
