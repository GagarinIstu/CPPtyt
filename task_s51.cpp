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
    cout << "������� ������ ��� ��������������: ";
    cin >> stroka;
    cout<<"������������� ������: ";
    revers(stroka);
    return 0;
}
