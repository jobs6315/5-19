#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf_s("%d %d", &n, &m);//输入n、m
//
//	int arr1[1000] = { 0 };
//	int i = 0;
//	for (i = 0;i < n;i++)
//	{
//		scanf_s("%d ", &arr1[i]);
//	}
//	int arr2[1000] = { 0 };
//	for (i = 0;i < m;i++)
//	{
//		scanf_s("%d ", &arr2[i]);
//	}//用数组装下输入
//
//	int j = 0;
//	int k = 0;
//	while (j<n && k<m)//如果j>k，则终止循环
//	{
//		if (arr1[j] > arr2[k])
//		{
//			printf("%d ", arr2[k]);
//			k++;
//		}
//		else
//		{
//			printf("%d ", arr1[j]);
//			j++;
//		}
//	}
//	if (j == n && k < m)
//		for (;k < m;k++)
//			printf("%d ", arr2[k]);
//	else
//		for (;j < n;j++)
//			printf("%d ", arr1[j]);
//	return 0;
//}
//#include<math.h>
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	int i = 0;
//	scanf_s("%d", &n);
//	while (n)
//	{
//		int m = n % 10;
//		if (m % 2 == 0)
//		{
//			m = 0;
//		}
//		else
//		{
//			m = 1;
//		}
//		ret = ret + m * pow(10, i++);
//		n = n / 10;
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int i = 0;
//	for (i = 0;i < n;i++)
//	{
//		int j = 0;
//		for (j = 0;j <n-i-1 ;j++)
//		{
//			printf("  ");
//		}
//		for (j = 0;j < i + 1;j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int My_strlen(char* p)
//{
//	int count = 0;
//	while (*p)
//	{
//		*p++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello world";
//	int len = My_strlen(arr);
//	printf("%d", len);
//	return 0;
//}
//char*my_strcpy(char* dest, char* src)
//{
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello world";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//void swap(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//	while (left < right)
//	{
//		//从前往后，找到第一个偶数，找到后停止
//		while (arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		//从后往前找，找到第一个奇数，找到后停止
//		while (arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		// 如果偶数和奇数都找到，交换这两个数据的位置
//		// 然后继续找，直到两个指针相遇
//		if (left < right)
//		{
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	swap(arr, sz);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int sum = 0;
//	while (n>=1)
//	{
//		sum += n;
//		n = n / 2;
//	}
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);
//    return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int *p = (int*)arr;
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
//#include<string.h>
//void reverse(char* str, int len)
//{
//	char* left = str;
//	char* right = str + len - 1;
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "hello world";
//	int len = strlen(arr);
//	reverse(arr, len);
//	printf("%s", arr);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf_s("%d %d", &n,&m);
//	int i = 0;
//	for (i = 0;i < m;i++)
//	{
//
//	}
//	return 0;
//}
//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf(" % d % d", a + b, c);
//	return 0;
//}
//int main()
//{
//	int A = 0;
//	int B = 0;
//	int C = 0;
//	int D = 0;
//	int E = 0;
//	for (A = 1;A <= 5;A++)
//	{
//		for (B = 1;B <= 5;B++)
//		{
//			for (C = 1;C <= 5;C++)
//			{
//				for(D=1;D<=5;D++)
//				{
//					for (E = 1;E <= 5;E++)
//					{
//						if (((B == 2) + (A == 3) == 1 && (B == 2) + (E == 4) == 1 && (C == 1) + (D == 2) == 1 &&
//							(C == 5) + (D == 3) == 1 && (E == 4) + (A == 1) == 1) == 1)
//							if (120 == A * B * C * D * E)
//								printf("A=%d B=%d C=%d D=%d E=%d", A, B, C, D, E);
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char killer = 'A';
//	for (killer = 'A';killer <= 'D';killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{
//			printf("凶手是：%c\n", killer);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//#define N 14
//int main()
//{
//    int i, j, k, n = 0, a[N][N];  /*定义二维数组a[14][14]*/
//    while (n <= 0 || n >= 13) 
//    {  /*控制打印的行数不要太大，过大会造成显示不规范*/
//        printf("请输入要打印的行数：");
//        scanf_s("%d", &n);
//    }
//    printf("%d行杨辉三角如下：\n", n);
//    for (i = 1;i <= n;i++)
//        a[i][1] = a[i][i] = 1;  /*两边的数令它为1，因为现在循环从1开始，就认为a[i][1]为第一个数*/
//    for (i = 3;i <= n;i++)
//        for (j = 2;j <= i - 1;j++)
//            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];  /*除两边的数外都等于上两顶数之和*/
//    for (i = 1;i <= n;i++) 
//    {
//        for (k = 1;k <= n - i;k++)
//            printf("   ");  /*这一行主要是在输出数之前打上空格占位，让输出的数更美观*/
//        for (j = 1;j <= i;j++)  /*j<=i的原因是不输出其它的数，只输出我们想要的数*/
//            printf("%6d", a[i][j]);
//
//        printf("\n");  /*当一行输出完以后换行继续下一行的输出*/
//    }
//    printf("\n");
//    return 0;
//}
//int check_sys()
//{
//	int i = 1;
//	return (*(char*)&i);
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}
//int main()
//{
//    char a = -1;
//    signed char b = -1;
//    unsigned char c = -1;
//    printf("a=%d,b=%d,c=%d", a, b, c);
//    return 0;
//}
//int main()
//{
//    char a = 128;
//    printf("%u\n", a);
//    //printf("%d\n", a);
//    return 0;
//}
//#include<string.h>
//int main()
//{
//    char a[1000] = { 0 };
//    int i = 0;
//    for (i = 0; i < 1000; i++)
//    {
//        a[i] = -1 - i;
//    }
//    printf("%d", strlen(a));
//    return 0;
//}
//#include<Windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9;i >= 0;i--)
//	{
//		printf("%u\n", i);
//		Sleep(1000);
//	}
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0;i < 1000;i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}
//unsigned char i = 0;
//#include<string.h>
//int main()
//{
//	/*for (i = 0;i <= 255;i++)
//	{
//		printf("hello world\n");
//	*/}
////if (strlen("abc") - strlen("abcdef") >= 0)
////printf(">\n");
////else
////printf("<\n");
//// 
//	return 0;
//}
//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	*pFloat = 9.0;
//	printf("num的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	return 0;
//}
//int main()
//{
//	float f = 5.5;
//	//5.5
//	//101.1
//	//1.011*2^2
//	//s=0 m=1.011 e=2
//	//2+127=129
//	//0100 0000 1011 0000 0000 0000 0000
//	//0x40b0000
//	return 0;
//}
//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	*pFloat = 9.0;
//	printf("num的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	return 0;
//}

