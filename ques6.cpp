/* Define a class Square to find the square of a number and write a C++ program to
Count number of times a function is called. */
#include <iostream>
using namespace std;
class Square
{
private:
    int s;
    int count = 0;

public: 
    void input() {
        cout << "Enter a number: ";
        cin >> s;
    }
    int square() {
        count++;
        return (s * s);
    }
    int count_fun() {
        return count;
    }
};
int main() 
{
    Square n;
    n.input();
    cout << n.square() << endl;
    cout << n.square() << endl;
    cout << n.square() << endl;
    cout << n.square() << endl;
    cout << n.square() << endl;
    cout << n.count_fun();
    return 0;
}