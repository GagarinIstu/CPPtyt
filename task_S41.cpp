#include <iostream>
using namespace std;

float squared_sum( float A, float B){
    float sp=(A+B)*(A+B);
    return sp;
}
int main(){
    setlocale(0,"");
    float A, B;
    cout << "�������� ����� �:";
    cin >> A;
    cout << "������� ����� �:";
    cin >> B;
    float sp=squared_sum(A, B);
    cout << "������� ����� ����� � � � �����: "<< sp << endl;

    return 0;

}

