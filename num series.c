#include<stdio.h>
int main()
{
int n,rem,rev ;
printf("Enter a Number:");
scanf("%d",&n);
while(n!=0)
{
	rem=n%10;
	rev=rev*10+rem;
	n=n/10;
}
printf(" Reverse of given number:%d",rev);
return 0;
}
