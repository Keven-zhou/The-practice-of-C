#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;

#include <iostream>

int main()
{
	const int m = 0;
	printf("m = %d\n", m);
	int* p = &m;
	*p = 20;
	cout << m << endl;
	return 0;
}
