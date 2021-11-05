#include <bits/stdc++.h>
//Ranking

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    //input
    int ranked_size, player_count, input;
    std::vector<int> ranked, player;

    std::cin >> ranked_size;
    for (int i = 0; i < ranked_size; i++)
    {
        std::cin >> input;
        ranked.push_back(input);
    }

    std::cin >> player_count;
    for (int i = 0; i < player_count; i++)
    {
        std::cin >> input;
        player.push_back(input);
    }

    //unique using sets
    std::set<int> s(ranked.begin(), ranked.end());
    ranked.assign(s.begin(), s.end());

    int j = 0;              //iterator through player[]
    std::vector<int> ranks; //stores ranks of player[]

    while (j < player_count)
    {
        std::vector<int> temp(ranked);
        temp.push_back(player[j]);

        //sort in Descending
        std::sort(temp.begin(), temp.end(), std::greater<int>());

        //search
        for (size_t i = 0; i < temp.size(); ++i)
        {
            if (temp[i] == player[j])
            {
                ranks.push_back(i + 1);
                break;
            }
        }
        j++;
        temp.clear();
    }

    //Output
    for (size_t i = 0; i < player_count; ++i)
    {
        std::cout << ranks[i] << ' ';
    }

    return 0;
}
