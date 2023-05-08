// Person.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Client.h"

using namespace std;

//Here is a struct that creates an object of type person.
struct person
{
    char firstName[20];
    char lastName[20];
    int age;
};

int main()
{
    //here we create an instance of the struct person and name it p.
    person p;

    //and here the details of the person can be entered.
    cout << "Enter person details." << endl;
    cout << "First name: ";
    cin >> p.firstName;
    cout << "Last name: ";
    cin >> p.lastName;
    cout << "Age: ";
    cin >> p.age;
                        
    //and then displayed to the screen.
    cout << "\nPerson information:" << endl;
    cout << "Name: " << p.firstName << " " << p.lastName << endl;
    cout << "Age: " << p.age << endl;

    //Client is a class created elsewhere in Client.h so we creqate an instance here a name it c.
    Client c;
    string name = "";
    long num = 0;

    //The details can then be entered for the client class
    cout << "\nPlease enter client details:" << endl;
    cout << "First name: ";
    cin >> c.firstname;
    cout << "Last name: ";
    cin >> c.lastName;
    cout << "Mobile phone: ";
    cin >> c.mobile;

    //before being converted into new variables for output (or storage)
    name = c.firstname + " " + c.lastName;
    num = c.mobile;

    //and displayed to the console.
    cout << "\nClient information: " << endl;
    cout << "\nName: " << name << endl;
    cout << "Mobile: " << num << endl;
}

