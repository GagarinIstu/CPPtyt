#include <iostream>
#include <fstream>
using namespace std;


int main(){
    setlocale(0,"");
    ofstream data;
    data.open("Filedata.txt");
    int A, B, C;
    cout << "����� � ������ ���� ������ ����� �!"<< endl;
    cout << "������� ����� �: ";
    cin >> A;
    cout << "������� ����� B: ";
    cin >> B;;
    for(int i=A; i<=B; i++){
        C=i*3;
        data << C << " ";
    }
    data.close();
    return 0;

}
