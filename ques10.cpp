/* Define a class Area and define instance member functions to find the area of the
different shapes like square, rectangle , circle etc. */
#include <iostream>
using namespace std;
class Area
{
private: 
    int length, width;
    int sq_len;
    int r;

public:
    // Taking input for radius of a circle
    void input() {
        cout << "Enter radius: ";
        cin >> r;
    }
    int area(int x, int y) {
        return (x * y);
    }
    int area(int s) {
        return (s * s);
    }
    float area() {
        return (3.14 * r * r);
    }
};