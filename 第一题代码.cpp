#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <ctype.h>
using namespace std;
class Student
{
public:
	void getandset();
	void show();
private:
	char num[100], age[10], name[100];								//考虑到用ASCII码识别数据类型更方便，故用字符数组存储数据。
};
void Student::getandset()											//取值与设置放在同一函数中，在输入的同时进行错误提醒，个人认为更方便一些。
{
	int i = 0, Age = 0, w = 0;
	cout << "name:";												//输入姓名，考虑到还未学会对中文进行识别，故没有错误提醒。
	cin >> name;
	cout << "number:";												//输入学号并进行判断，输入错误则提醒，重新输入。
	cin >> num;														//对于学号，仅有类型错误提醒，无大小错误提醒。
	while (num[i] != '\0')
	{
		if (num[i] >= '0' && num[i] <= '9')
			i++;
		else
		{
			cout << "输入错误，请重新输入：";
			cin >> num;
			i = 0;
		}
	}
	i = 0;
	cout << "age:";													//输入年龄，并伴有类型错误提醒，方法同上。
	cin >> age;														//对于年龄，存在大小错误提醒，设置年龄上限为125岁，应该没有不合理之处吧。
	while (w == 0)
	{
		while (age[i] != '\0')
		{
			if (age[i] >= '0' && age[i] <= '9')						//类型判断。
				i++;
			else
			{
				cout << "输入错误，请重新输入：";
				cin >> age;
				i = 0;
			}
		}
		while (1)
		{
			Age = atoi(age);										//用atoi函数将字符串转为整型，可判断大小。
			if (Age > 125)											//大小判断。
			{
				cout << "输入不合理，请重新输入：";
				cin >> age;
				i = 0;
				break;
			}
			else
			{w = 1; break;}
		}
	}
	cout << endl;
}

void Student::show()
{
	cout << "the student's name:";
	cout << name << endl;
	cout << "the student's number:";
	cout << num << endl;
	cout << "the student's age:";
	cout << age << endl;
	cout << endl;
}

int main()
{
	Student stu1, stu2;
	stu1.getandset();
	stu1.show();
	stu2.getandset();
	stu2.show();
}
