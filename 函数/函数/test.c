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
//	return z;//���ؽϴ�ֵ
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//��������
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//void ��ʾ�������κ�ֵ
//д��������
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
//	//дһ�����������������ͱ�����ֵ
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	Swap(a, b);
//	printf("������a=%d b=%d\n", a, b);
//	return 0;
//}


//
//int main()
//{
//	int a = 10;//4���ֽڿռ�
//
//	int* pa = &a;//pa����һ��ָ�����
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
//	//дһ�����������������ͱ�����ֵ
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("������a=%d b=%d\n", a, b);
//	return 0;
//}


//Swap1�ڱ����õ�ʱ��ʵ�δ��ݸ��βΣ���ʵ�β���ʵ�ε���ʱ����
//�ı��βΣ����ܸı�ʵ��

// void Swap1(int x, int y)//��ֵ����
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
// //ֱ�Ӱ��յ�ַ�һ���ԭλ��
//void Swap2(int* pa, int* pb)//��ַ����
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
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	Swap2(&a, &b);
//	printf("������a=%d b=%d\n", a, b);
//	return 0;
//}

////��ƺ���Ҫ�ú������ܵ�һ���ܹ���ʱ����
//
//int is_prime(int n)
//{
//	//2->n-1 ֮�������
//	int j = 0;
//	for (j = 2; j < n; j++)//j<n ���Ըĳ�-> j<=sqrt(n)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	//100-200֮������
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


//����д�������ͣ�Ĭ�Ϸ���int
//int is_leap_year(int x)
//{
//
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
////Ҳ����ֱ��return�ж�����
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
//	//�Ҳ�������-1
//	//�ҵ������±�
//	//���鴫�Σ����ݵĲ������鱾�����Ǵ��ݵĵ�һ��Ԫ�ص�ַ
//	//���sz�����ڴ��ݺ��ں�������
//	int ret = binary_search(arr, key, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
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


//������Ƕ�׵��ú���ʽ����
//#include<string.h>
//
//int main()
//{
//	int len = strlen("abc");
//	printf("%d\n", len);
//
//	//��ʽ����
//	printf("%d\n", strlen("abc"));
//
//	char arr1[20] = { 0 };
//	char arr2[] = "bit";
//	printf("%s\n", strcpy(arr1, arr2));
//	printf("%d", printf("%d", printf("%d", 43)));//printf�������ش�ӡ����Ļ�ϵ��ַ�����
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//��������,����������ʹ��
//	int Add(int, int );
//
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//
////�����Ķ���
//int Add(int x, int y)
//{
//	return x + y;
//}

//�ݹ���ǵ�������

