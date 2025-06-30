#include <iostream>
using namespace std;

class Calculator 
{
public:
    float divide(float a, float b) 
	{
        if (b == 0) 
		{
            throw "Division by zero is not allowed!";
        }
        return a / b;
    }
};

int main() 
{
    Calculator calc;

    try 
	{
        cout << "Division Result: " << calc.divide(10, 2) << endl;
        cout << "Division Result: " << calc.divide(10, 0) << endl;
    } catch (const char* msg) 
	{
        cout << "Error: " << msg << endl;
    }
}
/*
output:Division Result: 5
       Division Result: Error: Division by zero is not allowed!
*/
