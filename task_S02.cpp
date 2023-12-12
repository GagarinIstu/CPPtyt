#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int a = 5;
    int b = 2;
    int d1 = a / b;
    cout << "Division: " << d1 << endl;
    int d2 = a % b;
    cout << "Remainder of division: " << d2 << endl;

    return 0;
}


