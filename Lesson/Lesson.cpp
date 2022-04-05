#include <iostream>

void print()
{
	std::cout << "Hellow\n";
}
int printint(int toprint)
{
	std::cout << toprint;
	return toprint;
}

int main()
{	
	print();
	std::cout << printint(123);
	return 0;
}