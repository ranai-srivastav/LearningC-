#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

class Car
{
    
private:
    int num_wheels;
    string color;

public:
    Car() : num_wheels(4), color("Blue") 
    {
        cout << "initializing a new Blue car with 4 wheels" << endl;
    }

    Car(int _num_wheels, string _color) : num_wheels(_num_wheels), color(_color) 
    {
        cout <<  "Initializing a " << color << " car " << num_wheels << "number of w" << endl;
    }

    bool operator== (const Car &comp);

    Car operator+ (const Car &car1);
};

Car Car::operator+ (const Car &car1)
{
    return Car(this->num_wheels + car1.num_wheels,this->color + car1.color)
}

bool Car::operator== (const Car &comp)
{
    return (this->color == comp.color) && (this->num_wheels == comp.num_wheels);
}

class BMW : public Car
{
private:
    int vin;

public:
    string model;

    BMW() : Car(), vin(1), model("X4") {}
};


int main()
{
    Car c1 = Car();
    Car c2 = Car();

    Car other = Car(4, "Other");

    bool b = c1 == c2;
    cout << b << endl;

    b = c1 == other;
    cout << b << endl;
}

/**
 * When you are doing polymorphism using pointers, you need to have the overriden method virtual so that 
 * 
 */