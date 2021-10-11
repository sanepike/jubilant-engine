#include<iostream>




int main()
{
	int size;
	std::cout << "Enter the rows of the pattern : ";
	std::cin >> size;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < (2 * size - 1); j++)		//Here the end limit is 2*i-1 as every ith row has 2*i-1 columns
		{
			if ((j < size - i - 1) || (j > size + i - 1))	//It checks for the middle columns of each row meant for printing '#'
			{
				std::cout << ' ';
			}
			else
				std::cout << '#';
		}
		std::cout << std::endl;
	}

}
