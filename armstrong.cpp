#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()    
{    
int n,r,sum=0,temp;    
printf("enter the number=");    
scanf("%d",&n);    
temp=n;    
while(n>0)    
{    
r=n%10;    
sum=sum+(r*r*r);
n=n/10;    
}    
if(temp==sum)    
printf("%d isarmstrong  number ",temp);    
else    
printf("%d is not armstrong number",temp);    
return 0;  
}   
