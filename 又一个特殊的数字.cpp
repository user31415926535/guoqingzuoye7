//����Ȿ�������͵�������ͬ
#include<stdio.h>
#include<math.h>
int main()
{
	int t,i;
	printf("������һ��������");
	scanf_s("%d", &t);
	for (i = 10000; i < 100000; i++)//�ҳ������������λ��
	{
		int a, b, c, d, e;
		a = i / 10000;
		b = i / 1000 % 10;
		c = i / 100 % 10;
		d = i / 10 % 10;
		e = i % 10;
		if (a == e && b == d&&t==a+b+c+d+e)
		{
			printf("%d\n", i);
		}
	}
	for (i = 100000; i < 1000000; i++)//�ҳ������������λ��
	{
		int a1, b1, c1, d1, e1, f1;
		a1 = i / 100000;
		b1 = i / 10000 % 10;
		c1 = i / 1000 % 10;
		d1 = i / 100 % 10;
		e1 = i / 10 % 10;
		f1 = i % 10;
		if (a1 == f1 && b1 == e1 && c1 == d1&&t==a1+b1+c1+d1+e1+f1)
		{
			printf("%d\n", i);
		}
	}
}