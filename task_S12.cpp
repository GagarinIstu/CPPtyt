#include <iostream>
using namespace std;


int main(){
    setlocale(0,"");
    int num = 1;
    int sum = 0;

    while (num <= 1000) {
        if (num % 7 = 0) {
            sum=sum+num;}
        num=num+4;
    }
    cout << "The sum of numbers divisible by 7 is equal to: " << sum << endl;

    return 0;
}



