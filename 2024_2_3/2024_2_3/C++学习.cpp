

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
//1、宏常量
#if 0
#define day 7

int main() {

	cout << "一周里总共有 " << day << " 天" << endl;
	
	//day = 8;  //报错，宏常量不可以修改

	//2、const修饰变量
	const int month = 12;

	cout << "一年里总共有" << "month\n" << " 个月份\n" << endl;
	//month = 24; //报错，常量是不可以修改的

	int a;
	cin >> a;
	cout << "a的值为" << a << endl;
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
//	//成员列表
//	string name;  //姓名
//	int age;      //年龄
//	int score;    //分数
//	struct keven r;
//};
//
////地址传递
//void printStudent2(student* stu)
//{
//	stu->age = 28;
//	stu->r.school = "广东轻工职业技术学院";
//	stu->r.professional = "软件技术";
//	cout << "子函数中 姓名：" << stu->name << " 年龄： " << stu->age << " 分数：" << stu->score << " 高校名称 :" << stu->r.school << " 专业 ：" << stu->r.professional << endl;
//}
//
//int main() {
//
//	student stu = { "张三",18,100,{"广州大学","计算机科学与技术"} };
//	//地址传递
//	printStudent2(&stu);
//	cout << "主函数中 姓名：" << stu.name << " 年龄： " << stu.age << " 分数：" << stu.score << " 高校名称 :" << stu.r.school << " 专业 ：" << stu.r.professional << endl;
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
//	stu->zls.professional2 = "软件技术";
//	stu->professional = "商务英语";
//	stu->name = "陈懂王";
//	cout << " 姓名： " << stu->name << " 学校: " << stu->school << " 专业： " << stu->professional << " 年龄: " << stu->age << " 学号: " << stu->id << endl;
//	cout << " 姓名： " << stu->zls.name2 << " 学校: " << stu->zls.school2 << " 专业： " << stu->zls.professional2 << " 年龄: " << stu->zls.age2 << " 学号: " << stu->zls.id2 << endl;
//}
//
//int main() {
//
//	mine stk = { "陈明昱","广州大学","旅游管理",19,20232330,{"周乐燊","广东轻工职业技术学院","商务英语",19,20232332}};
//	struct mine* ptr = &stk;
//	print(&stk);
//	cout << " 姓名： " << ptr->name << " 学校: " << ptr->school << " 专业： " << ptr->professional << " 年龄: " << ptr->age << " 学号: " << ptr->id << endl;
//	cout << " 姓名： " << ptr->zls.name2 << " 学校: " << ptr->zls.school2 << " 专业： " << ptr->zls.professional2 << " 年龄: " << ptr->zls.age2 << " 学号: " << ptr->zls.id2 << endl;
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