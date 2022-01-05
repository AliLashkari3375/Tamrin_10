// Time class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Ali Lashkari
#include <iostream>
#include <string>

using namespace std;

class Time
{
	int second;
	int min;
	int hour;
public:
	void time()
	{
		do
		{
			cout << "please enter second:";
			cin >> second;
			cout << "please enter min:";
			cin >> min;
		} while (min>60 && second>60);
		cout << "please enter hour:";
		cin >> hour;
	}
	void show()
	{
		cout << hour << ":" << min << ":" << second << endl;
	}
	void Sum_Times(Time b);
	void change();
	void change_second();
};
void displaymenu()
{
	cout << "=====================================================\n";
	cout << " \t\t\tMENU \t\n";
	cout << "=====================================================\n";
	cout << " \t\t1.Show Sum Times\n";
	cout << " \t\t2.Show Change Times\n";
	cout << " \t\t3.Change Second to Times\n";
	cout << "\t\t4.IF YOU WANT EXIT PRESS **( N )**\n";
}
void Time::change()
{
	int h = hour * 3600;
	int m = min * 60;
	cout << "second:" << m + h + second << endl;
}
void Time::Sum_Times(Time b)
{
	int a = second + b.second;
	int m = min + b.min;
	int h = hour + b.hour;
	if (a > 60)
	{
		a = a % 60;
		m = m + 1;
	}
	if (m > 60)
	{
		m = m % 60;
		h = h + 1;
	}
	cout << "sum:" << h << ":" << m << ":" << a << endl;
}
void Time::change_second()
{
	int a, m, h;
	cout << "please enter second:";
	cin >> a;
	if (a <= 60)
	{
		cout << "00" << ":" << "00" << ":" << a << endl;
	}
	if (3600 > a && a > 60)
	{
		m = a / 60;
		a = a % 60;
		cout << "00" << ":" << m << ":" << a << endl;
	}
	if (a > 3600)
	{
		h = a / 3600;
		m = (a % 3600) / 60;
		a = (a % 3600) % 60;
		if (h < 10)
			cout << "0" << h << ":" << m << ":" << a << endl;
		else
			cout << h << ":" << m << ":" << a << endl;
	}
}
int main()
{
	Time Time1, Time2, change;
	int yourchoice;
	string confirm;
	cout << "time 1:" << endl;
	Time1.time();
	cout << "time 2:" << endl;
	Time2.time();
	do
	{
		Time1.show();
		Time2.show();
		displaymenu();
		cout << "Enter your choice(1-4):";
		cin >> yourchoice;
		switch (yourchoice)
		{
		case 1: Time1.Sum_Times(Time2); break;
		case 2: Time1.change(); break;
		case 3: change.change_second(); break;
		default: cout << "invalid"; break;
		}
		cout << "Press y or Y to continue:";
		cin >> confirm;
		system("cls");
	} while (confirm == "y" || confirm == "Y");
	return 0;
}//Ali Lashkari