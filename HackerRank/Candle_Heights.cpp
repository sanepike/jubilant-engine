#include<iostream>

int main()
{
	int n,candles[10],max=0,count=0;

	std::cout << "Enter the size of candles : ";	

	std::cin >> n;		//Input

	for (int i = 0; i < n; i++)
	{
		std::cin >> candles[i];
		if (candles[i] > max)		//Check for tallest candle
		{
			max = candles[i];
			count = 1;
		}
		else if (candles[i] == max)
			count++;				//Increament for tallest candle
	}
	std::cout << count;			//Output
}
