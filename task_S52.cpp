#include <iostream>

using namespace std;
/* �� ����� ����� �������, ��� ����� ���������� �������� ����� �������*/
void print(int A) {
    cout << A << endl;
}
void print(float A) {
    cout << A << endl;
}
void print(char A) {
    cout << A << endl;
}
void print(int A1, int A2) {
    cout << A1 << ", " << A2 << endl;
}
int main() {
    setlocale(0, "");
    int i, i1, i2;
    float f;
    char c;
    cout << "������� �������� int, float, char, int1 � int2:";
    cin >> i;
    cin >> f;
    cin >> c;
    cin>> i1;
    cin >> i2;
    print(i);
    print(f);
    print(c);
    print(i1, i2);
    return 0;
}
