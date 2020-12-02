#include<iostream>




int main()
{
	int size;
	std::cout << "Enter the rows of the pattern : ";
	std::cin >> size;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < (2 * size - 1); j++)
		{
			if ((j < size - i - 1) || (j > size + i - 1))
			{
				std::cout << ' ';
			}
			else
				std::cout << '#';
		}
		std::cout << std::endl;
	}

}