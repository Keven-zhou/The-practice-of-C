

using namespace std;
#include <iostream>
#include <iostream>
#if 0
int main()
{

    int a = 10;
    int b = 2;
    a -= b;
    cout << b << endl;

    return 0;
}
#endif
//1���곣��
#if 0
#define day 7

int main() {

	cout << "һ�����ܹ��� " << day << " ��" << endl;
	
	//day = 8;  //�����곣���������޸�

	//2��const���α���
	const int month = 12;

	cout << "һ�����ܹ���" << "month\n" << " ���·�\n" << endl;
	//month = 24; //���������ǲ������޸ĵ�

	int a;
	cin >> a;
	cout << "a��ֵΪ" << a << endl;
	cout << endl;


	return 0;
}
#endif
#include <string.h>
//int main() {
//
//
//	string str = "hello world";
//	cout << str << endl;
//	printf("hello C++\n");
//	cout << "hello C++" << "\n";
//	return 0;
//}




//struct keven {
//	string school;
//	string professional;
//};
//
//struct student
//{
//	//��Ա�б�
//	string name;  //����
//	int age;      //����
//	int score;    //����
//	struct keven r;
//};
//
////��ַ����
//void printStudent2(student* stu)
//{
//	stu->age = 28;
//	stu->r.school = "�㶫�Ṥְҵ����ѧԺ";
//	stu->r.professional = "�������";
//	cout << "�Ӻ����� ������" << stu->name << " ���䣺 " << stu->age << " ������" << stu->score << " ��У���� :" << stu->r.school << " רҵ ��" << stu->r.professional << endl;
//}
//
//int main() {
//
//	student stu = { "����",18,100,{"���ݴ�ѧ","�������ѧ�뼼��"} };
//	//��ַ����
//	printStudent2(&stu);
//	cout << "�������� ������" << stu.name << " ���䣺 " << stu.age << " ������" << stu.score << " ��У���� :" << stu.r.school << " רҵ ��" << stu.r.professional << endl;
//
//
//
//	return 0;
//}


//struct yours {
//	string name2;
//	string school2;
//	string professional2;
//	int age2;
//	int id2;
//};
//
//struct mine {
//	string name;
//	string school;
//	string professional;
//	int age;
//	int id;
//	struct yours zls;
//};
//
//
//
//void print(mine* stu) {
//	stu->zls.professional2 = "�������";
//	stu->professional = "����Ӣ��";
//	stu->name = "�¶���";
//	cout << " ������ " << stu->name << " ѧУ: " << stu->school << " רҵ�� " << stu->professional << " ����: " << stu->age << " ѧ��: " << stu->id << endl;
//	cout << " ������ " << stu->zls.name2 << " ѧУ: " << stu->zls.school2 << " רҵ�� " << stu->zls.professional2 << " ����: " << stu->zls.age2 << " ѧ��: " << stu->zls.id2 << endl;
//}
//
//int main() {
//
//	mine stk = { "������","���ݴ�ѧ","���ι���",19,20232330,{"���֟�","�㶫�Ṥְҵ����ѧԺ","����Ӣ��",19,20232332}};
//	struct mine* ptr = &stk;
//	print(&stk);
//	cout << " ������ " << ptr->name << " ѧУ: " << ptr->school << " רҵ�� " << ptr->professional << " ����: " << ptr->age << " ѧ��: " << ptr->id << endl;
//	cout << " ������ " << ptr->zls.name2 << " ѧУ: " << ptr->zls.school2 << " רҵ�� " << ptr->zls.professional2 << " ����: " << ptr->zls.age2 << " ѧ��: " << ptr->zls.id2 << endl;
//	return 0;
//}
//

//int main()
//{
//	const int m = 0;
//	printf("m = %d\n", m);
//	int* p = &m;
//	*p = 20;
//	printf("m = %d\n", m);
//	return 0;
//}