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
    cout << "������� ��: ";
    cin >> A;
    cout << "������� ��: ";
    cin >> B;
    cout << "������� ��: ";
    cin >> C;
    if(A<=0 or B<=0 or C<=0){
        cout << "������� ������������ ������(��������(�) �� ����� ���� 0)";
    }
    else{
    float angle = get_angle(A, B, C);
    cout << "���� ������� �������� ������� �� �����: " << angle << endl;
    }
    return 0;

}
