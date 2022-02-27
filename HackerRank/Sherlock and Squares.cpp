#include <bits/stdc++.h>
// Sherlock and Squares
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int tests;
    std::cin >> tests;
    while (tests--)
    {
        int a, b;
        int begin, end;
        std::cin >> a >> b;

        begin = ceil(sqrt(a));
        end = floor(sqrt(b));
  
        std::cout << end - begin + 1 << '\n'; 
    }
    return 0;
}
