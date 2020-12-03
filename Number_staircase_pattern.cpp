#include<iostream>




int main()
{
	int row,val;
	std::cout << "Enter the row size : ";
	std::cin >> row;
	for (int i = 1; i <= row; i++)
	{
		val = i;
		for (int j = 1; j <= (2 * i - 1); j++)
		{
			std::cout <<'\t'<< val;
			if (j >= i)
			{
				val--;
			}
			else
				val++;
		}
		std::cout << std::endl;
	}
}