#include<stdio.h>

int input()
{
	int x;
	printf("Enter The Value you want to sum : \n");
	scanf("%d",&x);
	return x;
}

int sum(int a,int b)
{
	return a+b;
}

void result(int x,int y,int z)
{
	printf("The Sum Of %d and %d is %d .\n",x,y,z);
}


int main()
{
	int a,b,c;
	a=input();
	b=input();
	c=sum(a,b);
	result(a,b,c);
	return 0;
}
 
