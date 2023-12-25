#include <iostream>
using namespace std;

int main()
{
    setlocale(0,"");
    int i;
    string mas[10]={"ноль", "один", "два", "три","четыре", "пять", "шесть", "семь","восемь","девять"};
    cout<<"ВВедите номер числа:"<<" ";
    cin >> i;
    cout << "Ответ:" << " ";
    cout<<mas[i]<<endl;
    return 0;
}
