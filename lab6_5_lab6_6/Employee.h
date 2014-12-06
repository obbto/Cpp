#pragma once
#include <string>
#include <iostream>
using namespace std;
class Employee
{
private:
	char name[10], add[10], city[10], code[10];
public:

	Employee()
	{
		strcpy(name, "noname");
		strcpy(add, "noadd");
		strcpy(city, "nocity");
		strcpy(code, "nocode");
	}

	~Employee()
	{
	}

	Employee(char iname[10],char iadd[10],char icity[10],char icode[10])
	{
		strcpy(name, iname);
		strcpy(add, iadd);
		strcpy(city, icity);
		strcpy(code, icode);
	}

	void display()
	{
		cout << name<<endl;
		cout << add << endl;
		cout << city << endl;
		cout << code << endl;
		cout << endl;
	}

	void change_name(char iname[10])
	{
		strcpy(name, iname);
	}
};

