#include<stdio.h>
//#include<assert.h>
//
//char* my_strcpy(char* dest, char* src)
//{
//	//assert(dest != NULL);
//	//assert(src != NULL);
//	assert(src && dest);
//
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char *arr2 = "hello bit";
//
//	my_strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int num = 0;
//	scanf_s("%d", & num);
//	for (i = 30;i >= 0;i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	for (i = 31;i >= 1;i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int j = 0;
//	int k = 6;
//	for (i = 0;i <10;i++)
//	{
//		scanf_s("%d",&arr[i]);
//	}
//	for (i = 0;i < 10;i+=2)
//	{
//		arr[j] = arr[i];
//		j++;
//	}
//	printf("\n");
//	for (i = 1;i < 10;i += 2)
//	{
//		arr[k] = arr[i];
//		k++;
//	}
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}
//void func(int arr[], int sz)
//{
//    int i = 0;   //首先将i初始化
//    for (int j = 0; j < sz; j++)
//    {
//        if (arr[j] % 2 == 1)   //进去的条件：nums是奇数
//        {
//            int tmp = arr[j];   //先保存nums[j]
//            for (int k = j - 1; k >= i; k--) //将[i，j)之间的偶数都像后移动一个位置
//            {
//                arr[k + 1] = arr[k];
//            }
//            arr[i++] = tmp;  //将tmp的值放进前面因移动而多出的一个空位上，下标i向后移动
//        }
//    }
//}
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    func(arr, sz);
//    for (int i = 0; i < sz; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//#include<stdio.h>
//void swap(int arr[], int sz)
//
//{
//    int left = 0;
//    int right = sz - 1;
//    int tmp = 0;
//    while (left < right)
//    {
//        // 从前往后，找到一个偶数，找到后停止
//        while ( arr[left] % 2 == 1)
//        {
//            left++;
//        }
//
//        // 从后往前找，找一个奇数，找到后停止
//        while (arr[right] % 2 == 0)
//        {
//            right--;
//        }
//
//        // 如果偶数和奇数都找到，交换这两个数据的位置
//        // 然后继续找，直到两个指针相遇
//        if (left < right)
//        {
//            tmp = arr[left];
//            arr[left] = arr[right];
//            arr[right] = tmp;
//        }
//    }
//}
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    swap(arr, sz);
//    for (int i = 0; i < sz; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
#include<assert.h>
int My_strlen(const char* arr)
{
	assert(arr);
	int count = 0;
	while (*arr!='\0')
	{
		count++;
		arr++;
	}
	return count;
}
int main()
{
	char arr[] = "hello bit";
	int len = My_strlen(arr);
	printf("%d", len);
	return 0;
}