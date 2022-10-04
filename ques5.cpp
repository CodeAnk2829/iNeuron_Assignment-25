/* Define a class ReverseNumber and define an instance member function to find
Reverse of a Number using class. */
#include <iostream>
using namespace std;
class ReverseNumber
{
private: 
    int n;

public:
    void input() {
        cout << "Enter a number: ";
        cin >> n;
    }
    int reverse() {
        int rev = 0;
        while(n > 0) {
            rev = (rev * 10) + (n % 10);
            n /= 10;
        }
        return rev;
    }
};