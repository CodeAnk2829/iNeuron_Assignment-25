/* Define a class Circle and define an instance member function to find the area of the
circle. */
#include <bits/stdc++.h>
using namespace std;
class Circle
{
private: 
    int radius;

public:
    void input() {
        cout << "Enter radius: ";
        cin >> radius;
    }
    float area() {
        return (3.14 * radius * radius);
    }
};