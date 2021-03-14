/*
Тусур 106 вариант 12 задача

Вывести минимальное произведение последовательности двух элементов
*/
#include <iostream>
using namespace std;
 
int main()
{
    int count, a;
    cin >> count;
    int amin1 = INT16_MAX, amin2 = INT16_MAX, amax = 0;
    for (int i = 1; i <= count; i++)
    {
        cin >> a;
        if (a < amin1 || a < amin2)
            amin2 = amin1; amin1 = a;
        if (a > amax) amax = a;
    }
 
    if (amin1 < 0)
        cout << amin1 * amax << endl;
    if (amin1 > 0)
        cout << amin1 * amin2 << endl;
 
}
 
