#include <iostream>
#include <cmath>
using namespace std;
/*Разность между суммой квадратов и квадратом суммы
Сумма квадратов первых десяти натуральных чисел равна
1^2 + 2^2 + ... + 10^2 = 385
Квадрат суммы первых десяти натуральных чисел равен
(1 + 2 + ... + 10)^2 = 552 = 3025
Следовательно, разность между суммой квадратов и квадратом суммы первых десяти натуральных чисел составляет 3025 − 385 = 2640.
Найдите разность между суммой квадратов и квадратом суммы первых ста натуральных чисел.

Sum square difference
The sum of the squares of the first ten natural numbers is,
1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)^2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.*/

int main() {
	unsigned long int i = 1, Sum_Square = 0, Square_Sum = 0, End;
	cin >> End;
	while (i <= End) {
		Sum_Square = Sum_Square + pow(i, 2);
		Square_Sum = Square_Sum + i;
		i++;
	}
	Square_Sum = pow(Square_Sum, 2);
	cout << (Square_Sum - Sum_Square);
	return 0;
}