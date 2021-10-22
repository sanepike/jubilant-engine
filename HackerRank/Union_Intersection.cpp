//Union and Intersection using two-pointers

#include <bits/stdc++.h>

void arrayUnion(int[], int[], int, int);
void arrayIntersection(int[], int[], int, int);

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
        int sizeA, sizeB;
        std::cin >> sizeA >> sizeB;
        int A[sizeA], B[sizeB];

        //input
        {
            for (int i = 0; i < sizeA; i++)
            {
                std::cin >> A[i];
            }
            for (int i = 0; i < sizeB; i++)
            {
                std::cin >> B[i];
            }
        }

        arrayUnion(A, B, sizeA, sizeB);
        arrayIntersection(A, B, sizeA, sizeB);
    }
    return 0;
}

void arrayUnion(int A[], int B[], int sizeA, int sizeB)
{
    int result[sizeA + sizeB];
    int i = 0, j = 0, k = 0;

    for (; i < sizeA && j < sizeB;)
    {
        if (A[i] < B[j])
        {
            result[k++] = A[i++];
        }
        else if (A[i] > B[j])
        {
            result[k++] = B[j++];
        }
        else
        {
            result[k++] = A[i++];
            j++;
        }
    }
    if (i == sizeA)
    {
        for (; j < sizeB; j++)
        {
            result[k++] = B[j];
        }
    }
    else if (j == sizeB)
    {
        for (; i < sizeA; i++)
        {
            result[k++] = A[i];
        }
    }
    std::cout << "Union : ";
    for (int it = 0; it < k; it++)
    {
        std::cout << result[it] << ' ';
    }
    std::cout << std::endl;
    return;
}

void arrayIntersection(int A[], int B[], int sizeA, int sizeB)
{
    int result[sizeA + sizeB];
    int k = 0;
    for (int i = 0, j = 0; i < sizeA && j < sizeB;)
    {
        if (A[i] < B[j])
            i++;
        else if (A[i] > B[j])
            j++;
        else
        {
            result[k++] = A[i++];
            j++;
        }
    }
    std::cout << "Intersection : ";
    for (int it = 0; it < k; it++)
    {
        std::cout << result[it] << ' ';
    }
    std::cout << std::endl;
}
