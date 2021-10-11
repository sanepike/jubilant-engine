#include<iostream>




int main()
{
	int row,val;
	std::cout << "Enter the row size : ";
	std::cin >> row;			//Inputs Row
	for (int i = 1; i <= row; i++)		//Iterates through the row
	{
		val = i;			//Initialises the value of val to the current row
		for (int j = 1; j <= (2 * i - 1); j++)		//Iterates through the columns - the end limit is 2*i-1 as for ith row there are 2*i-1 columns
		{
			std::cout <<'\t'<< val;
			if (j >= i)				//Checks for the iterations beyond middle column
			{
				val--;
			}
			else
				val++;
		}
		std::cout << std::endl;
	}
}
