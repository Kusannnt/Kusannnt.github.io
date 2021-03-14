
/*
___________________________

Тусур 102 вариант 10 задача
Является ли число автоморфным
___________________________
*/

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(0, "");
	int num, length, lenpow;
	num; cin >> num;
	length = (num == 0 ? 1 : int(log10(num) + 1)); 
	lenpow = pow(10, length);
	int term = (num*num) % lenpow;
	if (num == term)cout << "Число автоаморфно" << "\n";
	else cout << "Число не автоаморфно" << "\n";
}

