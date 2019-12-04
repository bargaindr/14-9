#include <stdio.h>
void print_star()
{
	printf("*************************\n");
}
int f(int a,int b)
{
	int max;
	if(a==b)
	{
		max=0;
	}
	if(a>b)
	{
		max=1;
	}
    if(a<b)
	{
		max=-1;
	}
	
	printf("%10d\n",max);
	return (max); 
}
int main()
{
	int max;

	int a,b;
	printf("输入两个整数，空格隔开\n");
	scanf("%d%d",&a,&b);
	print_star();
	f(a,b);
	print_star();
	return 0;
}