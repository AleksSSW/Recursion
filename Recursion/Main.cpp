#include <iostream>

int factorial(int num) {
	if (num <= 0)
		return 1;// так как обще известный факториал нуля равен 1, а дальше идуут вычисления, поэтому возвращаем 1
	return factorial(num - 1) * num;
}

int fibonacci(int num) {
	if (num <= 0)
		return 0;
	if (num == 1)
		return 1;
	return fibonacci(num - 1) + fibonacci(num - 2);

}


int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	//факториал с помощью рекурсии
	/*std::cout << "Введите число ->";
	std::cin >> n;
	std::cout << n << "! = " << factorial(n) << "\n\n";*/
	//Задача 1. Числа фибоначчи
	/*std::cout << "Задача 1. Введите номер числа Фибаначчи: ";
	std::cin >> n;
	std::cout << "Число Фибоначчи № " << n << ":" << fibonacci(n) << std::endl;
	std::cout << "Первые 13 чисел Фибоначчи:\n";
	for (int i = 0; i < 13; i++)
		std::cout << fibonacci(i) << ' ';
	std::cout << "\n\n";



	return 0;
}