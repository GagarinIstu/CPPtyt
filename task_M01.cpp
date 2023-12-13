#include <iostream>
using namespace std;


int main() {
    setlocale(0,"");
    int s;

    cout << "Введите размер таблицы пифагора: ";
    cin >> s;
    cout << "Таблица Пифагора с заданным размером: " << endl;
    for (int i = 1; i <= s; i++) {
        for (int j = 1; j <= s; j++) {
            int zn = i * j;
            cout  << zn << '\t';
        }
        cout<<endl;
    }

    return 0;
}




