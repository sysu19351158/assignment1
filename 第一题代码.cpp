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
	char num[100], age[10], name[100];								//���ǵ���ASCII��ʶ���������͸����㣬�����ַ�����洢���ݡ�
};
void Student::getandset()											//ȡֵ�����÷���ͬһ�����У��������ͬʱ���д������ѣ�������Ϊ������һЩ��
{
	int i = 0, Age = 0, w = 0;
	cout << "name:";												//�������������ǵ���δѧ������Ľ���ʶ�𣬹�û�д������ѡ�
	cin >> name;
	cout << "number:";												//����ѧ�Ų������жϣ�������������ѣ��������롣
	cin >> num;														//����ѧ�ţ��������ʹ������ѣ��޴�С�������ѡ�
	while (num[i] != '\0')
	{
		if (num[i] >= '0' && num[i] <= '9')
			i++;
		else
		{
			cout << "����������������룺";
			cin >> num;
			i = 0;
		}
	}
	i = 0;
	cout << "age:";													//�������䣬���������ʹ������ѣ�����ͬ�ϡ�
	cin >> age;														//�������䣬���ڴ�С�������ѣ�������������Ϊ125�꣬Ӧ��û�в�����֮���ɡ�
	while (w == 0)
	{
		while (age[i] != '\0')
		{
			if (age[i] >= '0' && age[i] <= '9')						//�����жϡ�
				i++;
			else
			{
				cout << "����������������룺";
				cin >> age;
				i = 0;
			}
		}
		while (1)
		{
			Age = atoi(age);										//��atoi�������ַ���תΪ���ͣ����жϴ�С��
			if (Age > 125)											//��С�жϡ�
			{
				cout << "���벻�������������룺";
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
