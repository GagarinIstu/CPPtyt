#include <iostream>
#include <cmath>
using namespace std;


float get_angle(float A, float B, float C)
{
    float angle=(acos((B*B+C*C-A*A)/(2*B*C)))*(180/M_PI);
    return angle;
}
int main()
{
    setlocale(0, "");
    float A, B, C;
    cout << "Сторона АВ: ";
    cin >> A;
    cout << "Сторона ВС: ";
    cin >> B;
    cout << "Сторона СА: ";
    cin >> C;
    if(A<=0 or B<=0 or C<=0){
        cout << "Введины некорректные данные(аргумент(ы) не могут быть 0)";
    }
    else{
    float angle = get_angle(A, B, C);
    cout << "Угол лежащий напротив стороны АВ равен: " << angle << endl;
    }
    return 0;

}
