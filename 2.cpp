#include <stdio.h>
int sum(int a,int b)
{

	int he;
	he=0;
	printf("%d\n",he=a+b);
	return (he);
}
int main()
{
	int a,b;
	printf("输入两个实数，空格隔开\n");
	scanf("%d%d",&a,&b);
	sum(a,b);
	

	return 0;
}