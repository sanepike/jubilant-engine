#include <bits/stdc++.h>
// Append and Delete

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    std::string str1;
    std::string str2;
    int k;

    std::cin >> str1;
    std::cin >> str2;
    std::cin >> k;

    int index, i;
    int res1;
    int res2;

    for (i = 0; i < str1.length() && i < str2.length(); ++i)
    {
        if (str1[i] != str2[i])
        {
            break;
        }
    }
        index = i;
    

    res1 = str1.length() - i + str2.length() - i;
    res2 = str1.length() + str2.length();

    if (res1 == k) //Simple Append and Delete
    {
        std::cout << "Yes";
    }
    else if (res1 < k && (k - res1) % 2 == 0) //Advanced Append and Delete with extra Append & Delete
    {
        std::cout << "Yes";
    }
    else if (res2 <= k) //Complete Delete and Append with extra deletions
    {
        std::cout << "Yes";
    }

    else
    {
        std::cout << "No";
    }

    return 0;
}
