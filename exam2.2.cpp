#include <iostream>
using namespace std;

class Employee 
{
private:
    string name;
    float salary;
    string designation;

public:
    void setName(string n) 
	{
        name = n;
    }
    void setSalary(float s) 
	{
        salary = s;
    }
    void setDesignation(string d) 
	{
        designation = d;
    }
    string getName()
	{
        return name;
    }
    float getSalary()
	{
        return salary;
    }
    string getDesignation() 
	{
        return designation;
    }
};

int main() 
{
    Employee emp;
    emp.setName("gelani vraj");
    emp.setSalary(50000);
    emp.setDesignation("computer operator");

    cout << "Employee Name: " << emp.getName() << endl;
    cout << "Salary: " << emp.getSalary() << endl;
    cout << "Designation: " << emp.getDesignation() << endl;

}
/*
output:Employee Name: gelani vraj
                      Salary: 50000
                      Designation:computer operator
*/