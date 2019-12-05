/*
写一个判断素数的函数，在主函数输入一个整数，输出其是否为素数的信息
如果一个数，除了1和它本身之外，没有其他因数，那么这个数就是素数
如2,5,7,13是素数
4,9,10不是素数
*/

#include <stdio.h>
int ss(int a)
{
	int x,min,y;
		y=0;
	for(x=2;x<a-1;x++)		
	{
		if(a%x==0)
		{
			y=1;
			break;
		}
	}
	if(y==0)
	{
		printf("%d是素数\n",a);
	}
	else
		printf("%d不是素数\n",a);
	return (a);

}
int main()
{
	int a;

	scanf("%d",&a);
	ss(a);





	return 0;
}

