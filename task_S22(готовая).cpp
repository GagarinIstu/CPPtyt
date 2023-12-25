#include <iostream>
#include <fstream>
using namespace std;
/* Для работы этой программы необходимо запустить программу task_21, так как
нужно чтобы был файл Filedata.txt. У меня не получаетсяза один "проход программы" записать в файл и тут же считать из него.
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

