/*

___________________________

Тусур 101 вариант 11 задача
Найти количество элементов массива, которые == N; от 3 до 13;
___________________________
*/

#include <iostream>
using namespace std;
int main() {
	int16_t arr[100];
	int16_t n, g = 0; cin >> n;

	for (int i = 0; i < 100; i++)
	{
		arr[i] = rand() % 11 + 3;
		if (n == arr[i]) g++;
	}
	cout << g  << "\n";
}
