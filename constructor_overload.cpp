// Sreejita Bhardwaj 
// 23070123130 
// experiment 13: construtor overloading 

#include<iostream>
using namespace std;

class room
{
    private: 
    double length, breadth;

    public:
    room()
    {
        length = 7.2;
        breadth = 9.2;
    }

    room(double l, double b)
    {
        length = l;
        breadth = b; 
    }

    room(double len)
    {
        length = len;
        breadth = 7.2;
    }

    double calculateArea()
    {
        return length * breadth;
    }
};

int main()
{
    room room1, room2(8.2, 6.6), room3(8.2);

    cout << "When no argument is passed:" << endl;
    cout << "Area of room = " << room1.calculateArea() << endl;

    cout << "\nWhen (8.2, 6.6) is passed:" << endl;
    cout << "Area of room = " << room2.calculateArea() << endl;

    cout << "\nWhen breadth is fixed to 7.2 and (8.2) is passed:" << endl;
    cout << "Area of room = " << room3.calculateArea() << endl;

    return 0;
}
