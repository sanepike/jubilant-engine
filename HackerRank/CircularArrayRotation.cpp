#include <bits/stdc++.h>
//Used Modular Arithmetic instead of actually rotating the array

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, k, q;
    std::cin >> n >> k >> q;

    std::vector<int> arr;
    int input;

    for (int i = 0; i < n; ++i)
    {
        std::cin >> input;
        arr.push_back(input);
    }

    //queries
    while (q--)
    {
        int query;
        std::cin >> query;

        int index = (query - k) % n;

        if (index < 0)
        {
            index += n;
        }
        std::cout << arr[index] << '\n';
    }

    return 0;
}//main ends
