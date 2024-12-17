#include"Employee.h"
class salaried : public Employee
{
private:
    float weeklySalary;
public:
    salaried(string firstName, string lastname,string socialSecurityNumber,double weeklySalary=0 )
    :Employee(firstName,lastname,socialSecurityNumber)
    {
        this->weeklySalary=weeklySalary;
    }
    double earings() const
    {
        return weeklySalary;
    }
    
};