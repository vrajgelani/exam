#include <iostream>
#include <vector>
using namespace std;

class Shape 
{
public:
    virtual void display() = 0;
};

class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float r) : radius(r) 
	{}
    void display() override 
	{
        cout << "Shape: Circle, Radius: " << radius << endl;
    }
};

class Rectangle : public Shape 
{
private:
    float length, width;

public:
    Rectangle(float l, float w) : length(l), width(w) 
	{}

    void display() override 
	{
        cout << "Shape: Rectangle, Length: " << length << ", Width: " << width << endl;
    }
};

int main() 
{
    vector<Shape*> shapes;

    shapes.push_back(new Circle(5));
    shapes.push_back(new Rectangle(10, 5));

    for (Shape* shape : shapes) 
	{
        shape->display();
    }
}
/*
output:Shape: Circle, Radius: 5
Shape: Rectangle, Length: 10, Width: 5
*/
