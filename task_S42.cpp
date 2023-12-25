#include <iostream>

using namespace std;

void sortt(int arr[]) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 10 - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    setlocale(0, "");
    cout << "Введите массив для сортировки из 10 элементов:";
    int arr[10];
    for (int h = 0; h < 10; h++){
        cin >>arr[h];
    }
    int sizee = 10;
    sortt(arr);
    cout << "Отсортированный массив: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
