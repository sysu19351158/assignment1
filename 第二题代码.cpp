#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <ctype.h>
using namespace std;															//����ϳ����Ƚφ��£�����¡�
class Timedate
{
public:
	void getandset();
	void show();
private:
	char year[10],month[10], day[10], hour[10], mintue[10], second[10];
	enum MONTH { Jau, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec };
	int i = 0, Year = 0, Month = 0, Day = 0, Hour = 0, Mintue = 0, Second = 0, w = 0;		
};																				//���������ж�Ҫ�õ������������ж����ˡ�
void Timedate::getandset()
{
	cout << "year:";															//���� year ���ж����ͼ���С�����������Ѳ��������롣
	cin >> year;
	while (w == 0)
	{
		while (year[i] != '\0')
		{
			if (year[i] >= '0' && year[i] <= '9')								//�����жϡ�
				i++;
			else
			{
				cout << "�����������������year��";
				cin >> year;
				i = 0;
			}
		}
		while (1)
		{
			Year = atoi(year);										
			if (Year < 2010 || Year>2015)										//��С�жϡ�
			{
				cout << "���벻��������������year��";
				cin >> year;
				i = 0;
				break;
			}
			else
			{
				w = 1; break;
			}
		}
	}



	w = 0; i = 0;
	cout << "month:";															//���� month ���ж����ͼ���С�����������Ѳ��������롣
	cin >> month;
	while (w == 0)
	{
		while (month[i] != '\0')
		{
			if (month[i] >= '0' && month[i] <= '9')								//�����жϡ�
				i++;
			else
			{
				cout << "�����������������month��";
				cin >> month;
				i = 0;
			}
		}
		while (1)
		{
			Month = atoi(month);
			if (Month > 12 || Month < 1)										//��С�жϡ�
			{
				cout << "���벻��������������month��";
				cin >> month;
				i = 0;
				break;
			}
			else
			{
				w = 1; break;
			}
		}
	}



	w = 0; i = 0;
	cout << "day:";																//���� month ���ж����ͼ���С�����������Ѳ��������롣
	cin >> day;
	while (w == 0)
	{
		while (day[i] != '\0')
		{
			if (day[i] >= '0' && day[i] <= '9')									//�����жϡ�
				i++;
			else
			{
				cout << "�����������������day��";
				cin >> day;
				i = 0;
			}
		}
		while (1)
		{
			Day = atoi(day);
			if ((Month == 1 || Month == 3 || Month == 5 || Month == 7 || Month == 8 || Month == 10 || Month == 12) && Day > 31)		//���µ�day��С�ж�
			{
				cout << "���벻��������������day��";
				cin >> day;
				i = 0;
				break;
			}
			else if ((Month == 4 || Month == 6 || Month == 9 || Month == 11) && Day > 30)											//С�µ�day��С�ж�
			{
				cout << "���벻��������������day��";
				cin >> day;
				i = 0;
				break;
			}
			else if ((Year == 2012 && Month == 2) && Day > 29)																		//������µ�day��С�ж�
			{
				cout << "���벻��������������day��";
				cin >> day;
				i = 0;
				break;
			}
			else if (Year != 2012 && Month == 2 && Day > 28)																		//��������µĴ�С�ж�
			{
				cout << "���벻��������������day��";
				cin >> day;
				i = 0;
				break;
			}
			else if (Day < 1)																										//����dayΪ0���жϡ�
			{
				cout << "���벻��������������day��";		
				cin >> day;
				i = 0;
				break;
			}
			else
			{
				w = 1; break;
			}
		}
	}



	w = 0; i = 0;
	cout << "hour:";															//���� hour ���ж����ͼ���С�����������Ѳ��������롣
	cin >> hour;
	while (w == 0)
	{
		while (hour[i] != '\0')
		{
			if (hour[i] >= '0' && hour[i] <= '9')								//�����жϡ�
				i++;
			else
			{
				cout << "�����������������hour��";
				cin >> hour;
				i = 0;
			}
		}
		while (1)
		{
			Hour = atoi(hour);
			if (Hour > 23)														//��С�жϡ�
			{
				cout << "���벻��������������hour��";
				cin >> hour;
				i = 0;
				break;
			}
			else
			{
				w = 1; break;
			}
		}
	}



	w = 0; i = 0;
	cout << "mintue:";															//���� mintue ���ж����ͼ���С�����������Ѳ��������롣
	cin >> mintue;
	while (w == 0)
	{
		while (mintue[i] != '\0')
		{
			if (mintue[i] >= '0' && mintue[i] <= '9')							//�����жϡ�
				i++;
			else
			{
				cout << "�����������������mintue��";
				cin >> mintue;
				i = 0;
			}
		}
		while (1)
		{
			Mintue = atoi(mintue);
			if (Mintue > 59)													//��С�жϡ�
			{
				cout << "���벻��������������mintue��";
				cin >> mintue;
				i = 0;
				break;
			}
			else
			{
				w = 1; break;
			}
		}
	}



	w = 0; i = 0;
	cout << "second:";															//���� second ���ж����ͼ���С�����������Ѳ��������롣
	cin >> second;
	while (w == 0)
	{
		while (second[i] != '\0')
		{
			if (second[i] >= '0' && second[i] <= '9')							//�����жϡ�
				i++;
			else
			{
				cout << "�����������������second��";
				cin >> second;
				i = 0;
			}
		}
		while (1)
		{
			Second = atoi(second);
			if (Second > 59)													//��С�жϡ�
			{
				cout << "���벻��������������second��";
				cin >> second;
				i = 0;
				break;
			}
			else
			{
				w = 1; break;
			}
		}
	}



}



void Timedate::show()
{
	cout << year << "��";
	MONTH rightnow;
	rightnow = MONTH(Month-1);
	switch (rightnow)																//ʹ��switch����·ݵ������
	{
	case Jau:cout << "Jaunanry"; break;
	case Feb:cout << "Feberury"; break;
	case Mar:cout << "March"; break;
	case Apr:cout << "April"; break;
	case May:cout << "May"; break;
	case Jun:cout << "June"; break;
	case Jul:cout << "July"; break;
	case Aug:cout << "Augest"; break;
	case Sep:cout << "September"; break;
	case Oct:cout << "October"; break;
	case Nov:cout << "November"; break;
	case Dec:cout << "December"; break;
	}
	cout << day<<"��";
	if (Hour <= 9)																	//����hour��mintue��second�ȣ�Ϊ�˱�׼��������жϾ����Ƿ���ǰ��һ����0����֤��׼�����ۡ�
	{
		cout << "0" << hour << ":";
		if (Mintue <= 9)
		{
			cout << "0" << mintue << ":";
			if (Second <= 9)
				cout << "0" << second;
			else
				cout << second;
		}
		else
		{
			cout << mintue << ":";
			if (Second <= 9)
				cout << "0" << second;
			else
				cout << second;
		}
	}
	else
	{
		cout << hour << ":";
		if (Mintue <= 9)
		{
			cout << "0" << mintue << ":";
			if (Second <= 9)
				cout << "0" << second;
			else
				cout << second;
		}
		else
		{
			cout << mintue << ":";
			if (Second <= 9)
				cout << "0" << second;
			else
				cout << second;
		}
	}
}



int main()
{
	Timedate today;
	today.getandset();
	today.show();
}