
/*
___________________________

Тусур 101 вариант 10 задача
Калькулятор из 10 в 16 систему счисленний
___________________________
*/

#include <iostream>
using namespace std;
int main() {

	int b[8];
	int i = 0;
	int n; cin >> n;
	while (n > 0)
	{
		b[i] = n % 16;
		n /= 16;
		i++;
	}
	i--;
	for (int j = i; j >= 0; j--)
	{

		if (b[j] < 10) cout << b[j];
		if (b[j] == 10) cout << "A";
		if (b[j] == 11) cout << "B";
		if (b[j] == 12) cout << "C";
		if (b[j] == 13) cout << "D";
		if (b[j] == 14) cout << "E";
		if (b[j] == 15) cout << "F";
	}
}
