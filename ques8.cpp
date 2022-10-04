/* Define a class Rectangle and define an instance member function to find the area of
the rectangle. */
#include <iostream>
using namespace std;
class Rectangle
{
private: 
    int length;
    int width;

public:
    void input() {
        cout << "Enter length and width of a rectangle: ";
        cin >> length >> width;
    }
    int area() {
        return (length * width);
    }
};