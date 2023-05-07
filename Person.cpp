// Person.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Client.h"

using namespace std;

struct person
{
    char firstName[20];
    char lastName[20];
    int age;
};

int main()
{
    person p;

    cout << "Enter person details." << endl;
    cout << "First name: ";
    cin >> p.firstName;
    cout << "Last name: ";
    cin >> p.lastName;
    cout << "Age: ";
    cin >> p.age;

    cout << "\nPerson information:" << endl;
    cout << "Name: " << p.firstName << " " << p.lastName << endl;
    cout << "Age: " << p.age << endl;

    Client c;

    cout << "\nPlease enter client details:" << endl;
    cout << "First name: ";
    cin >> c.firstname;
    cout << "Last name: ";
    cin >> c.lastName;
    cout << "Mobile phone: ";
    cin >> c.mobile;

    string name = c.firstname + " " + c.lastName;
    int num = c.mobile;

    cout << "\nClient information: " << endl;
    cout << "\nName: " << name << endl;
    cout << "Mobile: " << num << endl;
}

