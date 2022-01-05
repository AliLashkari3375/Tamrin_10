// Kasr.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Ali lashkari
#include <iostream>
#include <string>
using namespace std;

class Deduction
{
	int numerator, denominator;
public:
	Deduction(int s, int m)
	{
		cout << "Enter numerator:";
		cin >> s;
		numerator = s;
		cout << "Enter denominator:";
		cin >> m;
		denominator = m;
	}
	
	void show(string name)
	{
		if (denominator == 1)
			cout << name << ":" << numerator << endl;
		else if (denominator != 0)
			cout << name << ":" << numerator << "/" << denominator << endl;
	};
	void sum(Deduction Deduction2);
	void subtraction(Deduction Deduction2);
	void divide(Deduction Deduction2);
	void multi(Deduction Deduction2);
};
void displaymenu()
{
	cout << "=====================================================\n";
	cout << " \t\t\tMENU \t\n";
	cout << "=====================================================\n";
	cout << " \t\t1.Show Sum\n";
	cout << " \t\t2.Show Subtraction\n";
	cout << " \t\t3.Show Multi\n";
	cout << " \t\t4.Show Divide \n";
	cout << "\t\t5.IF YOU WANT EXIT PRESS **( N )**:\n";
}
void Deduction::sum(Deduction Deduction2)
{
	int s = numerator * Deduction2.denominator + Deduction2.numerator * denominator;
	int m = this->denominator * Deduction2.denominator;
	cout << "sum:" << s << "/" << m << endl;
}
void Deduction::subtraction(Deduction Deduction2)
{
	int s = numerator * Deduction2.denominator - Deduction2.numerator * denominator;
	int m = this->denominator * Deduction2.denominator;
	cout << "subtraction:" << s << "/" << m << endl;

}
void Deduction::divide(Deduction Deduction2)
{
	int s = numerator * Deduction2.denominator;
	int m = denominator * Deduction2.numerator;
	cout << "divide:" << s << "/" << m << endl;
}
void Deduction::multi(Deduction Deduction2)
{
	int s = numerator * Deduction2.numerator;
	int m = denominator * Deduction2.denominator;
	cout << "multi:" << s << "/" << m << endl;
}

int main()
{
	int yourchoice;
	string confirm;
	cout << "kasr 1:" << endl;
	Deduction kasr1(0, 1);
	cout << "kasr 2:" << endl;
	Deduction kasr2(0, 1);
	system("cls");
	string name = "kasr1";
	kasr1.show(name);
	name = "kasr2";
	kasr2.show(name);
	do
	{
		displaymenu();
		cout << "\nEnter your choice(1-5):";
		cin >> yourchoice;
		switch (yourchoice)
		{
		case 1: kasr1.sum(kasr2); break;
		case 2: kasr1.subtraction(kasr2); break;
		case 3: kasr1.multi(kasr2); break;
		case 4: kasr1.divide(kasr2); break;
		default: cout << "invalid"; break;
		}
		cout << "Press y or Y to continue:";
		cin >> confirm;
		system("cls");
	} while (confirm == "y" || confirm == "Y");
	return 0;
}
//Ali lashkari