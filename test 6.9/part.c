#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//计算二进制数里1的数量
//int calc(int a)
//{
//	int n=0;
//	while (a)
//	{
//		a=a & (a - 1);
//		n++;
//	}
//	return n;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int n=calc(a);
//	printf("%d",n );
//	return 0;
//}
//输入两个整数，计算他们二进制不同位的个数；
//int count(int a, int b)
//{
//	int c = 0;
//	c = a ^ b;
//	c = calc(c);
//	return c;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int temp = count(m, n);
//	printf("%d\n", temp);
//	return 0;
//}
//struct dg
//{
//	int a;
//	char nume;
//	long number;
//};
////typedef struct dg;
//typedef struct s
//{
//	int b;
//	char c;
//	struct dg;
//}s;
//int main()
//{
//   struct dg a ={12 , 's',1234563 };
//   s a1 = { 34,'y',{13,'n',2432985} };
//	return 0;
//}
//这种算法不可取，虽然有优先级和结合性，没法确定唯一计算路径所以这个表达式可能因为计算顺序的差异导致结果是
//不一致的，所以表达式是错误的表达式。
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("ret = %d\n", ret);
//	return 0;
//}
//int Fac(int a)
//{
//	//int b = 0;
//	if (a <= 1)
//		return 1;
//	else
//		return (a*(Fac(a - 1)));
//}
int Fac(int a)
{
	int b = 0;
	while (a > 1)
	{
		b= a * (a - 1);
		a--;
	}
	return b;
	while (a <= 1)
	{
		return 1;
	}
	
}
int main()
{
	int n=0;
	scanf("%d", &n);
	int fac = Fac(n);
	printf("%d\n", fac);
	return 0;
}
