#include <iostream>
#include <fstream>
using namespace std;
/* ��� ������ ���� ��������� ���������� ��������� ��������� task_21, ��� ���
����� ����� ��� ���� Filedata.txt. � ���� �� ������������ ���� "������ ���������" �������� � ���� � ��� �� ������� �� ����.
*/

int main(){
    ifstream data;
    data.open("Filedata.txt");
    int n=1;
    string numbers;
    while(!data.eof()){
        data >>numbers;
        cout  << n++<< "."<<" "<<  numbers <<endl;
        numbers="";
    }
    data.close();

    return 0;
}

