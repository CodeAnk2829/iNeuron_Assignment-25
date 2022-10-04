/* Define a class LargestNumber and define an instance member function to find the
Largest of three Numbers using the class. */
#include <iostream>
using namespace std;
class LargestNumber
{
private: 
    int a;
    int b;
    int c;

public:
    void input() {
        cout << "Enter three numbers: ";
        cin >> a >> b >> c;
    }
    int findLargest() {
        return (a > b ? (a > c ? a : c) : (b > c ? b : c));
    }
};