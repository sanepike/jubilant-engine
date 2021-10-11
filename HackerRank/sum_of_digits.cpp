#include<iostream>

int main()
{
	int sum = 0,num;
	std::cout << "Enter the number : ";
	std::cin >> num;
	for (int i = 0; num % 10 != 0; num = num / 10)		//in step up and step down num is kept changing as each time the last digit is eliminated
	{
		sum += num % 10;				//num%10 gives the last digit of the number num
	}
	std::cout << sum;
}
