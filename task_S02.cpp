#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int a = 5;
    int b = 2;
    int d1 = a / b;
    cout << "Деление нацело: " << d1 << endl;
    int d2 = a % b;
    cout << "Остаток от деления: " << d2 << endl;

    return 0;
}


