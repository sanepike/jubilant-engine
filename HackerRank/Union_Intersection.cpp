//Union and Intersection using two-pointers algo on two sorted arrays

#include <bits/stdc++.h>

//arrayUnion : Uses two pointer algo for storing union in extra space
//arrayIntersection : Uses two pointer algo for storing intersection in extra space
//printArray : To print on console
void arrayUnion(std::vector<int>, std::vector<int>);
void arrayIntersection(std::vector<int>, std::vector<int>);
void printArray(std::vector<int>);

//driver function starts
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    //for multiple tests
    int tests;
    std::cin >> tests;

    while (tests--)
    {
        //n:size of first arr
        //m: size of second arr
        //input: temp input for vector<int>
        int n, m, input;
        std::vector<int> arr_1, arr_2;

        std::cin >> n >> m;

        //input
        for (int i = 0; i < n; i++)
        {
            std::cin >> input;
            arr_1.push_back(input);
        }

        for (int i = 0; i < m; i++)
        {
            std::cin >> input;
            arr_2.push_back(input);
        }

        //function calls for union and intersection
        arrayUnion(arr_1, arr_2);
        arrayIntersection(arr_1, arr_2);
    }
    return 0;
}
//driver function ends

//perform union
void arrayUnion(std::vector<int> arr_1, std::vector<int> arr_2)
{
    std::vector<int> unionResult;
    int i = 0, j = 0;

    //i iterates over arr_1
    //j iterates over arr_2
    //For both sorted vector<int>, push_back() the smaller from element b/w arr_1[i] and arr_2[j]
    //If both elements are equal, push_back() the element and i++,j++;
    for (; i < arr_1.size() && j < arr_2.size();)
    {
        if (arr_1[i] < arr_2[j])
            unionResult.push_back(arr_1[i++]);

        else if (arr_1[i] > arr_2[j])
            unionResult.push_back(arr_2[j++]);

        else
        {
            unionResult.push_back(arr_1[i++]);
            j++;
        }
    }

    //to push_back() the remaining elements of the bigger array if any
    if (i == arr_1.size())
    {
        for (; j < arr_2.size(); j++)
        {
            unionResult.push_back(arr_2[j]);
        }
    }
    else if (j == arr_2.size())
    {
        for (; i < arr_1.size(); i++)
        {
            unionResult.push_back(arr_1[i]);
        }
    }

    std::cout << "Union : ";
    printArray(unionResult);
    std::cout << std::endl;
    return;
}

//perform intersection
void arrayIntersection(std::vector<int> arr_1, std::vector<int> arr_2)
{
    std::vector<int> interResult;
    int i = 0, j = 0, k = 0;

    //i iterates over arr_1
    //j iterates over arr_2
    //For both elements equal, push_back() and i++,j++;
    for (; i < arr_1.size() && j < arr_2.size();)
    {
        if (arr_1[i] < arr_2[j])
            i++;
        else if (arr_1[i] > arr_2[j])
            j++;
        else
        {
            interResult.push_back(arr_1[i++]);
            j++;
        }
    }

    std::cout << "Intersection : ";
    printArray(interResult);
    std::cout << std::endl;
}

//print vector<int>
void printArray(std::vector<int> arr)
{
    for (std::vector<int>::iterator it = arr.begin(); it < arr.end(); it++)
    {
        std::cout << *it << ' ';
    }
    return;
}
