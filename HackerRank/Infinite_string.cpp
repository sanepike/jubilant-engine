#include <bits/stdc++.h>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    std::string str;
    unsigned long int n;

    getline(std::cin, str);
    std::cin >> n;

    int size = str.length();
    unsigned long int full_str, rest_str;

    full_str = n / size;
    rest_str = n % size;

    unsigned long int full_str_count = count(str.begin(), str.end(), 'a');
    unsigned long int rest_str_count = count(str.begin(), str.begin() + rest_str, 'a');

    unsigned long int count = full_str * full_str_count + rest_str_count;

    std::cout << count;
    return 0;
}
