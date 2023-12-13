#include <iostream>
#include <fstream>
using namespace std;


int main(){
    setlocale(0,"");
    ofstream data;
    data.open("Filedata.txt");
    int A, B, C;
    cout << "Число В должно быть больше числа А!"<< endl;
    cout << "Введите число А: ";
    cin >> A;
    cout << "Введите число B: ";
    cin >> B;;
    for(int i=A; i<=B; i++){
        C=i*3;
        data << C << " ";
    }
    data.close();
    return 0;

}
