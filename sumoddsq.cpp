#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,sum=0,j,k;
printf("Enter the limit of natural:");
scanf("%d",&n);
for(i=1;i<=n;i++) 
{
j=(2*i)-1;
k=j*j;
sum+=k;
}
printf("the sum of square of first %d odd numbers :%d ",n,sum);
return 0;
}
