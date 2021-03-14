
/*
___________________________

Тусур 101 вариант 12 задача
Сумма цифр десятичной записи, определить сумму которая наиболее чаще встречается в наборе, если чисел >1 вывести максимальную.
___________________________
*/

#include <iostream>
using namespace std;
int main() {
    int16_t n, a, b, c;
    cin >> n;
    int16_t* arr = new int16_t[n];
    for (int i = 0; i < n; i++)
    {
        int input; cin >> input;
        a = input / 100;
        b = (input % 100) / 10;
        c = input % 10;
        arr[i] = a + b + c;

    }

    int num, max_frq, frq, k;
    num = arr[0];
    max_frq = 1;
    for (int i = 0; i < n - 1; i++) {
        frq = 1;
        for (k = i + 1; k < n; k++)
            if (arr[i] == arr[k])
                frq += 1;
        if (frq > max_frq) {
            max_frq = frq;
            num = arr[i];
        }
    }
        cout << num << "\n";
}
