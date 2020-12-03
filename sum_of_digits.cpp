#include<iostream>

int main()
{
	int sum = 0,num;
	std::cout << "Enter the number : ";
	std::cin >> num;
	for (int i = 0; num % 10 != 0; num = num / 10)
	{
		sum += num % 10;
	}
	std::cout << sum;
}