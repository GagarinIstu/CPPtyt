#include <iostream>
#include <cmath>
using namespace std;

/*Для нахождения площади прямоугольника по формуле S = n*a^2/(4*tg(pi/n)),
где а-длина сторона многоугольника, n-число сторон мне понадобился тангес и для этого я поключил библиотеку сmath*/

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
    cout << "Enter the side length À: ";
    cin >> A;
    cout << "Enter the number of sides N: ";
    cin >> N;
    float square = get_square(A, N);
    cout << "The area of a polygon with side length A and number of sides N is equal to " << square << endl;
    return 0;

}
