#include <iostream>

unsigned long long fatorial(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	else {
		return n * fatorial(n - 1);
	}
}

int main() {
	int num;
	std::cout << "Fale um número: ";
	std::cin >> num;

	if (num < 0) {
		std::cout << "Isso aí existe, não, meu fi" << std::endl;
	}
	else {
		std::cout << "O fatorial de " << num << "é " << fatorial(num) << std::endl;
	}
	return 0;
}