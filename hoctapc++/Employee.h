#include<iostream>
#include<string>
using namespace std;
class Employee
{
private:
    string firstName, lastName , socialSecurityNumber;
public:
    Employee(string firstName, string lastname,string socialSecurityNumber) 
    {
        this->firstName=firstName;
        this->lastName=lastName;
        this->socialSecurityNumber=socialSecurityNumber;
    }
    void print () const
    {
        cout<<firstName;
        cout<<lastName;
        cout<<socialSecurityNumber;
    }
    virtual double earnings() const =0;
    virtual void print() const
    {
        cout<<""
    }
};