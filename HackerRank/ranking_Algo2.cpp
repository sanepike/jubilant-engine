#include <bits/stdc++.h>
//Ranking-Algo 2

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

    //sort in descending
    std::sort(ranked.begin(), ranked.end(), std::greater<int>());

    int j = 0;                 //iterator through player[]
    int i = ranked.size() - 1; //rev iterator through ranked[]
    std::vector<int> ranks;    //stores ranks of player[]
    bool isRanked = false;     //to check if a player[] is ranked

    for (; j < player_count; ++j)
    {
        isRanked = false;
        for (; i >= 0; i--)
        {

            if (ranked[i] > player[j])
            {

                ranks.push_back(i + 2);

                isRanked = true;
                break;
            }
            else if (ranked[i] == player[j])
            {
                ranks.push_back(i + 1);
                isRanked = true;
                break;
            }
        }
        if (not(isRanked))
        {
            ranks[j] = 1;
        }
    }

    //output
    for (size_t i = 0; i < player_count; ++i)
    {
        std::cout << ranks[i] << std::endl;
    }

    return 0;
}
