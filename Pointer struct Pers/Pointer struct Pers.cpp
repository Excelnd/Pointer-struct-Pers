// Pointer struct Pers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct Person {
	char name[100];
	int age;
	long long salary;
};

int main()
{


	Person p1, p2, p3;

	Person *pnt = &p1;

		cout << "Person details ";
		cout << endl << "Your name is ";
		cin >> pnt->name, 100;
		cout << endl << "Your age is ";
		cin >> pnt->age;
		cout << endl << "Your salary is ";
		cin >> pnt->salary;

		cout << "\nYour details are below\n";
		cout << endl << "##########################";

		cout << "\nPerson details ";
		cout << endl << "##########################";
		cout << "\nYour name is " << pnt->name;
		cout << endl;
		cout << "Your age is " << pnt->age;
		cout << endl;
		cout << "Your salary is " << pnt->salary;
		cout << endl;


	return 0;
}


