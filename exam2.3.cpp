#include <iostream>
#include <cmath>
using namespace std;

class Shape 
{
private:
    string color;
    float area;

public:
    void setColor(string c) 
	{
        color = c;
    }
    string getColor() 
	{
        return color;
    }
    float getArea() 
	{
        return area;
    }
    virtual void calculateArea() = 0;
};

class Circle : public Shape 
{
private:
    float radius;

public:
    void setRadius(float r)
	{
        radius = r;
    }

    float getRadius() 
	{
        return radius;
    }
    void calculateArea() override 
	{
        float area = 3.1416 * radius * radius;
        cout << "Area of Circle: " << area << endl;
    }
};

class Rectangle : public Shape 
{
private:
    float length;
    float width;

public:
    void setLength(float l) 
	{
        length = l;
    }
    void setWidth(float w) 
	{
        width = w;
    }
    void calculateArea() override 
	{
        float area = length * width;
        cout << "Area of Rectangle: " << area << endl;
    }
};

int main() 
{
    Circle c;
    c.setRadius(5);
    c.calculateArea();

    Rectangle r;
    r.setLength(10);
    r.setWidth(5);
    r.calculateArea();
}
/*
output:Area of Circle: 78.54
       Area of Rectangle: 50
*/