//WAP to find the sum of n fractions.//
#include<stdio.h>
int main()
{
int n,sum=0,i,a[50];
printf("enter value of n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("enter no. %d ",i);
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("sum of numbers %d",sum);
return 0;
}
