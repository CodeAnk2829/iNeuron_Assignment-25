/* Define a class Factorial and define an instance member function to find the Factorial
of a number using class. */
#include <iostream>
using namespace std;
class Factorial
{
private:
    int n;

public: 
    void input() {
        cout << "Enter a number: ";
        cin >> n;
    }
    int findFactorial() {
        int f = 1;
        for(int i = n; i > 0; --i) {
            f *= i;
        }
        return f;
    }
};