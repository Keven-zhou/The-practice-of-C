#define _CRT_SECURE_NO_WARNINGS 1

//struct stu {
//	char name[20];
//	int age;
//};
//void print(struct stu* ptr) {
//	printf("%s %d\n", ptr->name, ptr->age);
//}
//int main() {
//	/*struct stu s[] = { {"zhangsan",12},{"lisi",15},{"wangwu",18} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	for (int i = 0; i < sz; i++) {
//		printf("%s %d\n", s[i].name, s[i].age);
//	}*/
//	struct stu s = { "zhouleshen",18 };
//	print(&s);
//	return 0;
//}



#include <stdlib.h>
#include <string.h>
//struct stu {
//	char name[20];
//	int age;
//};
//
//int cmp_int(const* px, const* py) {
//	return strcmp(((struct stu*)py)->name , ((struct stu*)px)->name);
//}
//
////int cmp_int(const* tx, const* ty) {
////	return ((struct stu*)ty)->age - ((struct stu*)tx)->age;
////}
//
//void test2() {
//	struct stu s[] = { {"zhaagsan",18},{"zhaa",17},{"zhaaawu",20} };
//	//struct stu s[] = { {"zhangshan",18},{"lisi",17},{"wangwu",20} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sizeof(s) / sizeof(s[0]), sizeof(s[0]), cmp_int);
//}
//
//void test3() {
//	struct stu s[] = { {"zhaagsan",18},{"zhaa",17},{"zhaaawu",20} };
//	//struct stu s[] = { {"zhangshan",18},{"lisi",17},{"wangwu",20} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sizeof(s) / sizeof(s[0]), sizeof(s[0]), cmp_int);
//}
//
//int main() {
//	test2();
//	//test3();
//	return 0;
//}
#include <stdio.h>
//用qsort函数排序整型数据
/*nt cmp_int(const* k1, const* k2) {
	return  (*(int*)k2 -*(int*)k1);
}

void print(int* a,int sz) {
	for (int i = 0; i < sz; i++)
		printf("%d ", *(a + i));
	printf("\n");
}

void test() {
	int arr[] = { 3,4,1,7,5,9,20 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print(arr, sz);
}

int main() {

	test();

	return 0;
}*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stu {
	char name[20];
	int age;
};
//int cmp_int(const void* px, const void* py) {
//	return ((struct stu*)px)->age - ((struct stu*)py)->age;
//}

//int cmp_int(const void* px, const void* py) {
//	return strcmp(((struct stu*)py)->name, ((struct stu*)px)->name);
//}

int cmp_int(const void* px, const void* py) {
		return (*(int*)py - *(int*)px);
}


void _Swap(void* buff1, void* buff2, int sz) {
	int x = 0;
	for (x = 0; x < sz; x++) {//这里本质上是交换字节
		char tmp = *((char*)buff1 + x);
		*((char*)buff1 + x) = *((char*)buff2 + x);
		*((char*)buff2 + x) = tmp;
	}
}

void bubble_sort(void* base, int sz, int width, int cmp(void*, void*))//因为函数名是函数的地址，所以(*cmp)可以写成cmp
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz-1; i++) {
		for (j = 0; j < sz - i - 1; j++) {
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)//因为我们不知道这个是什么类型的，所以用char*指针比较合适，因为char*指针是最细的力度，+1的话就只是偏移1个字节
			{
				_Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);//这里的话主要我们是对它的字节进行交换
			}
		}

	}
}

void print(int* nums, int sz) {
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", *(nums + i));
	}
	printf("\n");
}

void test() {

	int arr[] = { 3,4,0,-5,6,10,1,14 };
	bubble_sort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), cmp_int);
	print(arr, sizeof(arr) / sizeof(arr[0]));
}

//void test2() {
//	struct stu s[]={ {"zhangsan",18},{"lisi",22},{"wangwu",20}};
//	bubble_sort(s, sizeof(s) / sizeof(s[0]), sizeof(s[0]), cmp_int);
//}

//void test3() {
//	struct stu s[] = { {"zhangsan",18},{"lisi",22},{"wangwu",20} };
//	bubble_sort(s, sizeof(s) / sizeof(s[0]), sizeof(s[0]), cmp_int);
//}

int main() {
	test();
	//test2();
	//test3();
	return 0;
 }