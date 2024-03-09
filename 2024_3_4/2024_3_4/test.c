#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}


#include <stdio.h>
#include <string.h>

//int main() {
//
//	//字符数组3.2
//	char* p = "abcdef";
//	printf("%zd\n", strlen(p));//1.输出结果是什么
//	printf("%zd\n", strlen(p + 1));//2.输出结果是什么
//	printf("%zd\n", strlen(*p));//3.输出结果是什么
//	printf("%zd\n", strlen(p[0]));//4.输出结果是什么
//	printf("%zd\n", strlen(&p));//5.输出结果是什么
//	printf("%zd\n", strlen(&p + 1));//6.输出结果是什么
//	printf("%zd\n", strlen(&p[0] + 1));//7.输出结果是什么
//
 //#include<stdio.h>
//
//int add(int x, int y) {
//	return x + y;
//}
//int sub(int x, int y) {
//	return x - y;
//}
//int mul(int x, int y) {
//	return x * y;
//}
//int div(int x, int y) {
//	return x / y;
//}
//
//void menu() {
//	printf("************\n");
//	printf("1.add  2.sub\n");
//	printf("3.mul  4.div\n");
//	printf("************\n");
//}
//
//void calc(int (*pf)(int, int)) {
//	int x = 0;
//	int y = 0;
//	printf("请输入操作数：");
//	scanf("%d %d", &x, &y);
//	int ret = pf(x, y);
//	printf("%d\n", ret);
//}
//
//int main() {
//
//	int input = 0;
//	do {
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input) {
//			case 1:
//			{
//				calc(add);
//				break;
//			}
//			case 2:
//			{
//				calc(sub);
//				break;
//			}
//			case 3:
//			{
//				calc(mul);
//				break;
//			}
//			case 4: {
//				calc(div);
//				break;
//			}
//		}
//
//
//
//	} while (input);
//
//
//	return 0;
//}