#include <iostream>
using namespace std;

float squared_sum( float A, float B){
    float sp=(A+B)*(A+B);
    return sp;
}
int main(){
    setlocale(0,"");
    float A, B;
    cout << "Ввведите число А:";
    cin >> A;
    cout << "Введите число В:";
    cin >> B;
    float sp=squared_sum(A, B);
    cout << "Квадрат суммы чисел А и В равен: "<< sp << endl;

    return 0;

}

