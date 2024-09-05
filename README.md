# Experiment 13
# Aim
To study and implement Constructor Overloading

# Apparatus 
Vs Code 

# Theory 
In C++, constructor overloading allows a class to have more than one constructor with different parameter lists. This enables the creation of objects in various ways depending on the argument passed during the instantiation. The compiler differentiates between constructors by checking the number and types of arguments.

Default Constructor: Initializes the object with default values (here, 0 for width and height).
Parameterized Constructor: Allows the user to initialize the object with specific values.
Copy Constructor: Initializes the object by copying values from another object.
This overloading helps provide flexibility when creating objects. The compiler will decide which constructor to use based on the arguments passed during object creation.



# Codes 
code 1
~~~
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
~~~
![image](https://github.com/user-attachments/assets/2e150f1d-9e91-4375-93f6-c48a1f760fdc)


code 2
~~~
#include<iostream>
using namespace std;

class fetch
{
    int num;
    public:
    fetch()
    {
        num = 3;
    }
    fetch(int x)
    {
        num = x;
    }
    fetch(fetch &b)
    {
        num = b.num;
    }
    void disp()
    {
        cout << num << endl;
    }
};

int main()
{
    fetch f1, f2(6), f3(f1);
    f1.disp();
    f2.disp();
    f3.disp();

    return 0;
}
~~~
![image](https://github.com/user-attachments/assets/2c42bebb-3eae-4823-9804-2813283f9d5a)
