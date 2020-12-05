#include<iostream>


int main()
{
	int n, m;

	std::cout << "Enter the number of cities : ";//Input number of cities
	std::cin >> n;


	std::cout << "Enter the number of ways : ";//Input number of ways
	std::cin >> m;

	/*
	x[10]			: array of cities of list 1
	y[10]			: array of cities of list 2
	city[10]		: to track which city has been visited already
	city_order[10]	: to track the order in which the cities are visited
	*/


	int x[10], y[10],city[10], city_order[10];
	

	/*To set each element of city[10] to 0
	0 denotes cities whivh have never been visited
	and 1 denotes cities which have been visited*/


	for (int i = 0; i < m; i++)
	{
		city[i]=0;
	}


	std::cout << "Enter the ways : ";
	for (int i = 0; i < m; i++)
	{
		std::cin >> x[i] >> y[i];	//Input the cities of list x and y respectively
	}


	/*
	pos denotes the posn of current_city in the array (either x or y)
	flag : To cycle through array x and y (1 for x and 2 for y)
	count	 : Count the number of path between two cities when moving from one city to another
	city_number	 : To store current city number
	order	: To iterate though city_order array
	*/

	int pos = -1, flag = 1, count =0, city_number = 1, order = 1;
	city_order[0] = 1;


	do
	{
		city[city_number] = 1;	//Updating the city number to 1 for city_number has already been visited	

		
		if (flag == 1)
		{
			
			
			for (int i = 0; i < m; i++)
			{
				
				if ((x[i] == city_number)&&(i!=pos))
				{
					
					
					if (city[y[i]] ==0)
					{
						pos = i;
						city_order[order] = y[i];	//Updating city_order with next city
						order++;					//Updating order
						city_number = y[i];			//Updating next city_number
						flag = 2;					//To check through y[10] for city_number
						count++;					//Counting the number of ordered ways
						break;
					}
				
				}
				flag = 2;
				
			}
		}
		
		
		else if (flag == 2)
		{
			
			
			for (int i = 0; i < m; i++)
			{
				
				
				if ((y[i] == city_number) && (i != pos))
				{
					
					if (city[x[i]] == 0)
					{
						pos = i;
						city_order[order] = x[i];		//Updating city_order with next city
						order++;						//Updating order
						city_number = x[i];				//Updating next city_number
						flag = 1;						//To check through x[10] for city_number
						count++;						//Counting the number of ordered ways
						break;
					}
				}
				flag = 1;
			}
		}
	} while (count<n-1);
	
	
	std::cout << (count+1)<<std::endl;		//Displaying count(number of ways) +1 for number of cities
	
	for (int i = 0; i < n; i++)
	{
		std::cout << city_order[i]<<' ';
	}
	
}