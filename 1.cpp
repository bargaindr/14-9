#include <stdio.h>
void print_star()
{
	printf("*************************\n");
}
int bj(int a,int b)
{
	int max;
	if(a>b)
	{
		max=a;
	}
		
	else
	{
		max=b;
	}
	printf("%10d���\n",max);
	return (max); 
}
int main()
{
	int max;

	int a,b;
	printf("���������������ո����\n");
	scanf("%d%d",&a,&b);
	print_star();
	bj(a,b);
	print_star();
	return 0;
}