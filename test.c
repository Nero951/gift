#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("9的个数为:%d\n", count);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	double sum = 0.0;int f = 1;
//	for (i=1;i <= 100;i++)
//	{
//		
//		
//		sum = sum + f*(1.0 / i);
//		f = -f;
//	}
//	printf("sum=%lf\n", sum);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int arr[10] = { 0 };
//	int max = 0;
//	while (a < 10)
//	{
//		scanf("%d", &arr[a]);
//		a++;
//	}
//	max = arr[0];
//	for (a = 0; a <= 10; a++)
//	{
//		if (max < arr[a])
//		{
//			max = arr[a];
//		}
//	}
//	printf("最大值为：%d\n", max);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d", i,j,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int a = 0;
	int left = 0;
	int right = 0;
	
	scanf("%d", &a);
	right = sizeof(arr) / sizeof(arr[0]) - 1;
	while (left <= right)
	{
		int mid = 0;
		mid = (left + right) / 2;
		if (a > arr[mid])
		{
			left=mid+1;
		}
		else if (a < arr[mid])
		{
			right = mid - 1;
		}
		else
		{
			printf("%d\n", mid);
			break;
		}
		if (left > right)
		{
			printf("无信息\n");
		}
	}
	
	return 0;
}