#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int main() {
//
//    int n = 0;
//    scanf("%d", &n);
//    getchar();
//    for (int i = 1; i <= n; i++) {
//        char str[101] = { 0 };
//        gets(str);
//        int len = 0;
//        int a = 0;
//        int d = 0;
//        int b = 1;
//        int c = 1;
//        int e = 0;
//        for (int j = 0; j < strlen(str); j++) {
//            if (!j) {
//                if (str[j] >= '0' && str[j] <= '9') {
//                    c = 0;
//                }
//            }
//            if ((!(str[j] >= 'a' && str[j] <= 'z'))&& (!(str[j] >= 'A' && str[j] <= 'Z')) && (!(str[j] >= '0' && str[j] <= '9')))
//            {
//                b = 0;
//                break;
//            }
//            if (str[j] >= '0' && str[j] <= '9') {
//                a++;
//            }
//            if (str[j] >= 'A' && str[j] <= 'Z') {
//                d++;
//            }
//            if (str[j] >= 'a' && str[j] <= 'z') {
//                e++;
//            }
//            len++;
//        }
//        if ((b && c && a && e && len >= 8) || (b && c && a && d && len >= 8) || (b && c && d && e && len >= 8)) {
//            printf("YES\n");
//        }
//        else {
//            printf("NO\n");
//        }
//    }
//    return 0;
//}



//nums1 = { 1,2,2,1 };//4
//nums2 = { 2,2 };//2

//int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
//	static int arr[1000];//static修饰这个数组的时候，使这个数组生命周期变长了
//	*returnSize = 0;
//	int i, j, k;
//	for (i = 0; i < nums1Size; i++) {
//		for (j = 0; j < nums2Size; j++) {
//			if (nums2[j] == nums1[i]) break;//判断nums1[i] 是否在nums2数组中
//		}
//		if (j == nums2Size) {// nums1中i位置的数据在nums2数组中不存在，则非交集数据
//			continue;
//		}
//		//只有在另一个数组中存在的数据才能走下来，判断是否已经被添加到返回数组中
//		for (j = 0; j < *returnSize; j++) {
//			if (nums1[i] == arr[j]) break;//判断nums1[i] 是否在 arr 这个返回数组中
//		}
//		if (j == *returnSize) {//不在返回数组中，则添加到返回数组中
//			arr[*returnSize] = nums1[i];
//			*returnSize += 1;
//		}
//	}
//	return arr;
//}


#include <stdio.h>
#include <string.h>

//void sort(char str[], int sz) {
//	int i = 0;
//	for (i = 0; i < sz - 1; i++) {
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++) {
//			if (str[j] > str[j + 1]) {
//				char tmp = str[j + 1];
//				str[j + 1] = str[j];
//				str[j] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag)break;
//	}
//}
//
//void print(char* str, int sz) {
//	int t = 0;
//	for (t = 0; t < sz; t++) {
//		printf("%c", *(str + t));
//	}
//}
//
//int main() {
//	char str[1001] = { 0 };
//	scanf("%s", str);
//	sort(str, sizeof(str) / sizeof(str[0]));
//	print(str, sizeof(str) / sizeof(str[0]));
//
//	return 0;
//}

//int main() {
//
//	int nums[] = { 1, 2, 3 };
//	int numsSize = sizeof(nums) / sizeof(nums[0]);
//	int ret=-1;
//	for (int i = 0; i < numsSize; ++i) {
//		int sum1 = 0;
//		int sum2 = 0;
//		if (!i) {
//			for (int j = 1; j < numsSize; j++) {
//				sum2 += nums[j];
//			}
//			if (sum1 == sum2) {
//				ret = 0;
//				break;
//			}
//		}
//		else {
//			for (int j = 0; j < i; j++) {
//				sum1 += nums[j];
//			}
//			for (int j = i + 1; j < numsSize; j++) {
//				sum2 += nums[j];
//			}
//			if (sum1 == sum2) {
//				ret = i;
//				break;
//			}
//		}
//	}
//	if (ret != -1)
//		return ret;
//	else {
//		return ret;
//	}
//	return 0;
//}

#include <stdio.h>
#include <string.h>
int main() {

    char str[501] = { 0 };
    char str2[501] = { 0 };
    scanf("%s", str);
    int len = strlen(str);
    int x = 0;
    for (int i = 0; i < len; i++) {
        int ret = 1;
        if (!i) {
            str2[x++] = str[i];
        }
        else {
            for (int j = 0; j <= x; j++) {
                if (str2[j] == str[i])
                    continue;
                else if (str2[j] == '\0') {
                    for (int k = 0; k < j; k++) {
                        if (str2[k] == str[i]) {
                            ret = 0;
                            break;
                        }
                    }
                    if (ret) {
                        str2[x++] = str[i];
                        break;
                    }
                }
            }

        }
    }
    printf("%zd", strlen(str2));
    return 0;
}