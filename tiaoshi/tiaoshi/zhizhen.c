#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//����һ
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

//������

//int main() {
//    
//    char str[10000];
//    gets(str);
//    for (int right = strlen(str) - 1, left = 0; left < right; right--, left++)//˫ָ�뷨������ߺ��ұߵ�Ԫ�����м俿£������ʵ���������Ľ��� 
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

//����k���ַ���
#include <stdio.h>
#include <string.h>
char * Hanshu(char *str,int x) {
	int len = x % strlen(str);
	for (int i = 0; i < len; i++) {
		
		char tmp = *str;//��������Ԫ�صĵ�ַ��ͨ�������õķ�ʽ������Ԫ�ص�ֵ����tmp��
		int j = 0;
	
		for (; j < strlen(str)-1; j++) {
			*(str + j) = *(str + j + 1);//�ú����Ԫ��ֵ��ǰ���Ԫ��ֵ�����ǵ�
		}
		*(str+j) = tmp;//�����ʼ��Ԫ�ظ��ظ�*(str+j)
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
	while (*str++)//��strָ���Ԫ�ص�ַΪ\0�ĵ�ַ,ͨ�������õó�����\0��Ԫ�أ�\0��ASCll��ֵ��0,0Ϊ�٣������˳�whileѭ��
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
		printf("���%d��ѡ���ܷ���%.2f��\n", i, sum);
		puts("5λ��ί�����ĵ÷�����:");
		for (int j = 0; j < 5; j++) {
			printf("%d ", a[j]);
		}
		printf("\n");
	}

	return 0;
}