#include <iostream>
#include <cstring>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int steps;
    int altitude = 0;
    int valCount = 0; //Valley Count
    std::string path;

    std::cin >> steps;

    std::cin.ignore();
    getline(std::cin, path);

    //Calculating the valley count
    //for every element in the string, check if altitude == 0
    //If Altitude == 0 while encountering the string then
    //that element decides whether the hiker is hiking up(U) or down(D)
    for (int i = 0; i < steps; i++)
    {
        if (altitude == 0)
        {
            if (path[i] == 'D')
            {
                valCount++;
            }
        }
        altitude = path[i] == 'U' ? altitude + 1 : altitude - 1;
    }

    //Output
    std::cout << valCount;

    return 0;
}
