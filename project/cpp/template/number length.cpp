
/*
___________________________

Найти длину числа
___________________________
*/


}
#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
	int x;
	cin >> x;
	cout << (x == 0 ? 1 : int(log10(x) + 1));
	return 0;
}
