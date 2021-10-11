#include<iostream>

int main()
{
	//Von Neumens binary Number
	int lines;
	std::cout << "Enter the number of binary numbers : ";
	std::cin >> lines;

	/*
		Bin :Binary numbers
		Ans :Decimal numbers
	*/
	int bin[10], ans[10];		
	
	for(int i=0;i<lines;i++)
	{
		std::cin >> bin[i];		//Input


		int val = 1,sum=0,num=bin[i];	//Initialisation
		for (; num  != 0; num = num / 10)
		{
			/*
				converts decimal to binary : multiplies each digit with val(bases of 2)
											 and adds to sum
			*/
			sum = sum + (num % 10) * val;		
			val = val * 2;
		}
		ans[i] = sum;		//Store sum into ans
	}
	for (int i = 0; i < lines; i++)
	{
		std::cout << ans[i]<<' ';		//Output
	}
}
