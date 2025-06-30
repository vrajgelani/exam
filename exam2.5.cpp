#include <iostream>
using namespace std;

class Employee 
{
private:
    string name;
    float salary;

public:
    Employee(string n, float s) : name(n), salary(s) 
	{}
    float operator+(const Employee& other) {
        return salary + other.salary;
    }
    void display() 
	{
        cout << "Employee Name: " << name << ", Salary: " << salary << endl;
    }
};

int main() 
{
    Employee emp1("vraj", 50000);
    Employee emp2("chintan", 60000);
    
    cout << "Total Salary: " << emp1 + emp2 << endl;
}
/*
output:Total Salary: 110000
*/