/*
Тусур 106 вариант 10 задача
Алгоритм который находит все трехзначные числа Армстронга
*/
#include <iostream>
using namespace std;
 
int main() {
	int a, b, c;
	for (int i = 100; i < 999; i++)
	{
		a = i / 100;
		b = (i % 100) / 10;
		c = i % 10;
		if (a*a*a + b*b*b + c*c*c == i)
			cout << i << "\n";
	}
}

