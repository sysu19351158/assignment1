#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <ctype.h>
using namespace std;															//代码较长，比较啰嗦，请见谅。
class Timedate
{
public:
	void getandset();
	void show();
private:
	char year[10],month[10], day[10], hour[10], mintue[10], second[10];
	enum MONTH { Jau, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec };
	int i = 0, Year = 0, Month = 0, Day = 0, Hour = 0, Mintue = 0, Second = 0, w = 0;		
};																				//两个函数中都要用到，所以在类中定义了。
void Timedate::getandset()
{
	cout << "year:";															//输入 year 并判断类型及大小，有误则提醒并重新输入。
	cin >> year;
	while (w == 0)
	{
		while (year[i] != '\0')
		{
			if (year[i] >= '0' && year[i] <= '9')								//类型判断。
				i++;
			else
			{
				cout << "输入错误，请重新输入year：";
				cin >> year;
				i = 0;
			}
		}
		while (1)
		{
			Year = atoi(year);										
			if (Year < 2010 || Year>2015)										//大小判断。
			{
				cout << "输入不合理，请重新输入year：";
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
	cout << "month:";															//输入 month 并判断类型及大小，有误则提醒并重新输入。
	cin >> month;
	while (w == 0)
	{
		while (month[i] != '\0')
		{
			if (month[i] >= '0' && month[i] <= '9')								//类型判断。
				i++;
			else
			{
				cout << "输入错误，请重新输入month：";
				cin >> month;
				i = 0;
			}
		}
		while (1)
		{
			Month = atoi(month);
			if (Month > 12 || Month < 1)										//大小判断。
			{
				cout << "输入不合理，请重新输入month：";
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
	cout << "day:";																//输入 month 并判断类型及大小，有误则提醒并重新输入。
	cin >> day;
	while (w == 0)
	{
		while (day[i] != '\0')
		{
			if (day[i] >= '0' && day[i] <= '9')									//类型判断。
				i++;
			else
			{
				cout << "输入错误，请重新输入day：";
				cin >> day;
				i = 0;
			}
		}
		while (1)
		{
			Day = atoi(day);
			if ((Month == 1 || Month == 3 || Month == 5 || Month == 7 || Month == 8 || Month == 10 || Month == 12) && Day > 31)		//大月的day大小判断
			{
				cout << "输入不合理，请重新输入day：";
				cin >> day;
				i = 0;
				break;
			}
			else if ((Month == 4 || Month == 6 || Month == 9 || Month == 11) && Day > 30)											//小月的day大小判断
			{
				cout << "输入不合理，请重新输入day：";
				cin >> day;
				i = 0;
				break;
			}
			else if ((Year == 2012 && Month == 2) && Day > 29)																		//闰年二月的day大小判断
			{
				cout << "输入不合理，请重新输入day：";
				cin >> day;
				i = 0;
				break;
			}
			else if (Year != 2012 && Month == 2 && Day > 28)																		//非闰年二月的大小判断
			{
				cout << "输入不合理，请重新输入day：";
				cin >> day;
				i = 0;
				break;
			}
			else if (Day < 1)																										//输入day为0的判断。
			{
				cout << "输入不合理，请重新输入day：";		
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
	cout << "hour:";															//输入 hour 并判断类型及大小，有误则提醒并重新输入。
	cin >> hour;
	while (w == 0)
	{
		while (hour[i] != '\0')
		{
			if (hour[i] >= '0' && hour[i] <= '9')								//类型判断。
				i++;
			else
			{
				cout << "输入错误，请重新输入hour：";
				cin >> hour;
				i = 0;
			}
		}
		while (1)
		{
			Hour = atoi(hour);
			if (Hour > 23)														//大小判断。
			{
				cout << "输入不合理，请重新输入hour：";
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
	cout << "mintue:";															//输入 mintue 并判断类型及大小，有误则提醒并重新输入。
	cin >> mintue;
	while (w == 0)
	{
		while (mintue[i] != '\0')
		{
			if (mintue[i] >= '0' && mintue[i] <= '9')							//类型判断。
				i++;
			else
			{
				cout << "输入错误，请重新输入mintue：";
				cin >> mintue;
				i = 0;
			}
		}
		while (1)
		{
			Mintue = atoi(mintue);
			if (Mintue > 59)													//大小判断。
			{
				cout << "输入不合理，请重新输入mintue：";
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
	cout << "second:";															//输入 second 并判断类型及大小，有误则提醒并重新输入。
	cin >> second;
	while (w == 0)
	{
		while (second[i] != '\0')
		{
			if (second[i] >= '0' && second[i] <= '9')							//类型判断。
				i++;
			else
			{
				cout << "输入错误，请重新输入second：";
				cin >> second;
				i = 0;
			}
		}
		while (1)
		{
			Second = atoi(second);
			if (Second > 59)													//大小判断。
			{
				cout << "输入不合理，请重新输入second：";
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
	cout << year << "年";
	MONTH rightnow;
	rightnow = MONTH(Month-1);
	switch (rightnow)																//使用switch完成月份的输出。
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
	cout << day<<"日";
	if (Hour <= 9)																	//对于hour，mintue，second等，为了标准输出，经判断决定是否在前加一个‘0’保证标准及美观。
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