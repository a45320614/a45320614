#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int i=2;
	while(a%i!=0)
	{
		i++;
	}
	if(i<a)
	{
		printf("這個數字不是質數!");
	}
	else
		printf("這個數字是質數!");
	
}
