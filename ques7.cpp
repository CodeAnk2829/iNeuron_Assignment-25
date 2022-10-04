/* Define a class Greatest and define instance member function to find Largest among
3 numbers using classes. */
#include <iostream>
using namespace std;
class Greatest
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
    int greatestNum() {
        return (a > b ? (a > c ? a : c) : (b > c ? b : c));
    }
};