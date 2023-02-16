#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abc";
//
//	strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//	
//	return 0;
//} 
//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;//返回较大值
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数调用
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//void 表示不返回任何值
//写出问题了
//void Swap(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//写一个函数交换两个整型变量的值
//	printf("交换前：a=%d b=%d\n", a, b);
//	Swap(a, b);
//	printf("交换后：a=%d b=%d\n", a, b);
//	return 0;
//}


//
//int main()
//{
//	int a = 10;//4个字节空间
//
//	int* pa = &a;//pa就是一个指针变量
//	*pa = 20;
//
//	printf("%d\n", a);
//
//	return 0;
//}

//
//void Swap(int* pa, int* pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//	return;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//写一个函数交换两个整型变量的值
//	printf("交换前：a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("交换后：a=%d b=%d\n", a, b);
//	return 0;
//}


//Swap1在被调用的时候，实参传递给形参，其实形参是实参的临时拷贝
//改变形参，不能改变实参

// void Swap1(int x, int y)//传值调用
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
// //直接按照地址找回了原位置
//void Swap2(int* pa, int* pb)//传址调用
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//	return;
//}
//
// int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap1(a, b);
//	printf("交换前：a=%d b=%d\n", a, b);
//	Swap2(&a, &b);
//	printf("交换后：a=%d b=%d\n", a, b);
//	return 0;
//}

////设计函数要让函数功能单一，能够随时调用
//
//int is_prime(int n)
//{
//	//2->n-1 之间的数字
//	int j = 0;
//	for (j = 2; j < n; j++)//j<n 可以改成-> j<=sqrt(n)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	//100-200之间素数
//	int i = 0;
//	for (int i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//不填写返回类型，默认返回int
//int is_leap_year(int x)
//{
//
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
////也可以直接return判断条件
//
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//			printf("%d ", y);
//	}
//	return 0;
//}


////int binary_search(int* a, int k, int s)
//int binary_search(int a[], int k, int s)
//{
//	int left = 0;
//	int right = s - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//找不到返回-1
//	//找到返回下标
//	//数组传参，传递的不是数组本身，而是传递的第一个元素地址
//	//因此sz不能在传递后在函数内求
//	int ret = binary_search(arr, key, sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//}


//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//
//	Add(&num);
//	printf("%d\n", num);
//
//	Add(&num);
//	printf("%d\n", num);
//
//	return 0;
//}


//函数的嵌套调用和链式访问
//#include<string.h>
//
//int main()
//{
//	int len = strlen("abc");
//	printf("%d\n", len);
//
//	//链式访问
//	printf("%d\n", strlen("abc"));
//
//	char arr1[20] = { 0 };
//	char arr2[] = "bit";
//	printf("%s\n", strcpy(arr1, arr2));
//	printf("%d", printf("%d", printf("%d", 43)));//printf函数返回打印在屏幕上的字符个数
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//函数声明,先声明，后使用
//	int Add(int, int );
//
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//
////函数的定义
//int Add(int x, int y)
//{
//	return x + y;
//}

//递归就是调用自身

