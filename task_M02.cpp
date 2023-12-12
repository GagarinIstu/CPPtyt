#include <iostream>
#include <cmath>
using namespace std;

/*��� ���������� ������� �������������� �� ������� S = n*a^2/(4*tg(pi/n)),
��� �-����� ������� ��������������, n-����� ������ ��� ����������� ������ � ��� ����� � �������� ���������� �math*/

float get_square(float A, int N)
{
    float square=(N*A*A)/(4*tan(M_PI/N));
    return square;
}
int main()
{
    setlocale(0, "");
    float A;
    int N;
    cout << "Enter the side length �: ";
    cin >> A;
    cout << "Enter the number of sides N: ";
    cin >> N;
    float square = get_square(A, N);
    cout << "The area of a polygon with side length A and number of sides N is equal to " << square << endl;
    return 0;

}
