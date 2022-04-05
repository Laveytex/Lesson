#include <iostream>

void print()
{
	std::cout << "Hellow\n";
}

int sum(int a, int b) {
	return (a + b);
}

int printint(int toprint)
{
	std::cout << toprint<<"\n";
	return toprint;
}

int main()
{	
	print();
	std::cout << printint(123);
	int summa = sum(5, -3);
	return summa;
}

