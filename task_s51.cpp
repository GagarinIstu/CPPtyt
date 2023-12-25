#include<iostream>

using namespace std;

void revers(string stroka){
    int i;
    for(i=stroka.length(); i >= 0; i--)
    {
       cout<<stroka[i];
    }
}

int main(){
    setlocale(0, "");
    string stroka;
    cout << "Введите строку для отзеркаливания: ";
    cin >> stroka;
    cout<<"Отзеркаленная строка: ";
    revers(stroka);
    return 0;
}
