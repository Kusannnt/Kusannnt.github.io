/*
Тусур 106 вариант 11 задача
Найти 3 максимума массива
*/
#include <iostream>
using namespace std;
int main() {
    const int n = 20;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand();
    }
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        cout << arr[i] << "\t";
    }
}
