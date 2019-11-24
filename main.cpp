#include <iostream>
using namespace std;

int main()
{
    {
        int a = 0;
        cout << a << endl;
    }
    cout << a << endl; // Error: a was not declared in this scope!
    return 0;
}
