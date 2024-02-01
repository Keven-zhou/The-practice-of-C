#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//方法一
//int main() {
//
//	char str[10000];
//	scanf("%[^\n]s", str);
//	int len = strlen(str);
//	int i = len - 1;
//	while (i>=0) {
//		printf("%c", str[i--]);
//	}
//	return 0;
//}

//方法二

//int main() {
//    
//    char str[10000];
//    gets(str);
//    for (int right = strlen(str) - 1, left = 0; left < right; right--, left++)//双指针法，让左边和右边的元素向中间靠拢，即可实现两个数的交换 
//    {
//        char tmp = str[left];
//        str[left] = str[right];
//        str[right] = tmp;
//    }
//    for (int x = 0; x <= strlen(str)-1; x++) {
//        printf("%c", str[x]);
//    }
//    return 0;
//}
//
//

//int main() {
//
//	char a = 'w';
//	char b = 'x';
//	char * const  p = &b;
//
//	*p = 'z';
//	printf("%c", *p);
//	return 0;
//}

//左旋k个字符串
#include <stdio.h>
#include <string.h>
char * Hanshu(char *str,int x) {
	int len = x % strlen(str);
	for (int i = 0; i < len; i++) {
		
		char tmp = *str;//把数组首元素的地址，通过解引用的方式，把首元素的值传到tmp中
		int j = 0;
	
		for (; j < strlen(str)-1; j++) {
			*(str + j) = *(str + j + 1);//用后面的元素值把前面的元素值给覆盖掉
		}
		*(str+j) = tmp;//把最初始的元素赋回给*(str+j)
	}
	return str;

}


int main43() {

	char str[] = "ABCD";
	int k = 0;
	scanf("%d", &k);
	char *ret = Hanshu(str, k);
	printf("%s\n",ret);

	return 0;
}

#include <stdio.h>
int my_strlen(char* str) {
	int cnt = 0;
	while (*str++)//当str指向的元素地址为\0的地址,通过解引用得出的是\0的元素，\0的ASCll码值是0,0为假，所以退出while循环
	{
		cnt++;
	}
	return cnt;
}

int main40() {

	char str[100];
	scanf("%[^\n]s", str);
	int ret = my_strlen(str);
	printf("%d\n", ret);

	return 0;
}


//void hanshu(int a[], int sz) {
//	int i = 0;
//	for (int i = 0; i < sz; i++) {
//		if (a[i] % 2) {
//			printf("%d ", a[i]);
//		}
//	}
//	for (int i = 0; i < sz; i++) {
//		if (a[i] % 2 == 0) {
//			printf("%d ", a[i]);
//		}
//	}
//
//}
//int main() {
//
//	int arr[] = { 5,7,4,5,8,26 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	hanshu(arr, sz);
//
//	return 0;
//}


//void test() {
//	
//	test2();
//	void test2 () {
//
//	}
//}
//
//int main() {
//
//	test();
//	test2();
//
//	return 0;
//}


int main() {
	int a[5];
	for (int i = 1; i <= 1; i++) {
		double sum = 0.0;
		int max = 0;
		int min = 0;
		for (int j = 0; j < 5; j++) {
			scanf("%d ", &a[j]);
		}
		max = a[0];
		min = a[0];
		for (int j = 1; j < 5; j++) {
			if (min > a[j]) {
				min = a[j];
			}
			if (a[j] > max) {
				max = a[j];
			}
		}
		for (int j = 0; j < 5; j++) {
			if (a[j] > min && a[j] < max) {
				sum += a[j];
			}
		}
		printf("编号%d的选手总分是%.2f。\n", i, sum);
		puts("5位评委给出的得分如下:");
		for (int j = 0; j < 5; j++) {
			printf("%d ", a[j]);
		}
		printf("\n");
	}

	return 0;
}