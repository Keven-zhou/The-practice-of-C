#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//void print(int(*a)[5], int r, int c) {
//	int i = 0;
//	for (i = 0; i < r; i++) {
//
//		int j = 0;
//		for (j = 0; j < c; j++) {
//			printf("%d ", *(*(a + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//
//int main() {
//
//	int arr[][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} }; 
//	print(arr, 3, 5);//这里的arr传的是二维数组首元素的地址
//	return 0;
//}



//转移表

#include <stdio.h>
//
//int Add(int x, int y) {
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
//	printf("*********************\n");
//	printf("******  0.exit ******\n");
//	printf("******  1.Add  ******\n");
//	printf("******  2.sub  ******\n");
//	printf("******  3.mul  ******\n");
//	printf("******  4.div  ******\n");
//	printf("*********************\n");
//}
//
//int main() {
//
//	int a, b = 0;
//	int input = 0;
//	int (*parr[5])(int a, int b) = { 0,Add,sub,mul,div };
//	do {
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4) {
//			printf("请输入两个操作数：");
//			scanf("%d %d", &a, &b);
//			int ret = parr[input](a, b);//parr相当于函数指针数组，input则相当于数组的下标，输入哪个值，就调用哪个下标的函数
//			printf("%d\n", ret);
//		}
//		else if (input == 0) {
//			printf("退出计算器\n");
//		}
//		else {
//			printf("输入有误\n");
//		}
//
//	} while (input);
//
//
//
//	return 0;
//}
//
//

//void calc(int  ptr(int ,int )) {
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数：");
//	scanf("%d %d", &x, &y);
//	int ret = ptr(x, y);
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
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(sub);
//			break;
//		case 3:
//			calc(mul);
//			break;
//		case 4:
//			calc(div);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//冒泡排序法
//void sort(int b[], int sz) {
//	int i = 0;
//	for (i = 0; i < sz - 1; i++) {
//		int j = 0;
//		for (int j = 0; j < sz - i - 1; j++) {
//			if (b[j] > b[j + 1]) {
//				int tmp = b[j];
//				b[j] = b[j + 1];
//				b[j + 1] = tmp;
//			}
//		}
//	}
//
//}
//
//void Two_dog(int a[], int sz) {
//	int b[3] = { 0 };
//	int j = 0;
//	int i = 0;
//	for (i = 0; i < sz-1; ) {
//		if (a[i] == a[i + 1]) {
//				i += 2;
//			}
//		else {
//			b[j++] = a[i++];
//		}
//		if (i == sz - 1) {
//			b[j++] = a[i];
//			break;
//		}
//	}
//
//	for (int x = 0; x < j; x++)
//		printf("%d ", b[x]);
//	printf("\n");
//}
//


#include <stdio.h>
void Find_twodogs(int* t, int sz, int* px, int* py) {
	int ret = 0;
	for (int i = 0; i < sz; i++) {
		ret ^= *(t + i);
	}
	int pos = 0;
	for (int j = 0; j < 32; j++) {
		if (((ret>>j)&1)==1) {
			pos = j;
			break;
		}
	}
	for (int i = 0; i < sz; i++) {
		if ((*(t + i) >> pos) & 1) {
			*px ^= *(t + i);
		}
		else {
			*py ^= *(t + i);
		}
	}

}

int main() {

	int a[] = { 1,2,3,4,5,1,2,3,4,6};
	int sz = sizeof(a) / sizeof(a[0]);
	int dog1 = 0, dog2 = 0;
	Find_twodogs(a,sz,&dog1, &dog2);

	printf("%d %d\n", dog1, dog2);
	return 0;
}






//int Add(int x, int y) {
//	return x + y;
//}
//
//int main() {
//
//	int (*pf3)(int x, int y) = Add;
//	printf("%d\n", (*pf3)(2, 4));
//	return 0;
//}