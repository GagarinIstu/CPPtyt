#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int n1 = 2;
    float n2 = 9.5;
    double n3 = 0.85;
    char c1 = 'F';
    int summa = n1 + n2;
    cout << "�����: " << summa <<endl;
    double difference = n3 - n2;
    cout << "��������: " << difference <<endl;
    float product = n2 * n3;
    cout << "���������: " << product <<endl;
    double quotient = n3 / n1;
    cout << "�������: " << quotient <<endl;

    return 0;
}


