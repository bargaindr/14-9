/*
дһ���ж������ĺ�����������������һ��������������Ƿ�Ϊ��������Ϣ
���һ����������1��������֮�⣬û��������������ô�������������
��2,5,7,13������
4,9,10��������
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
		printf("%d������\n",a);
	}
	else
		printf("%d��������\n",a);
	return (a);

}
int main()
{
	int a;

	scanf("%d",&a);
	ss(a);





	return 0;
}

