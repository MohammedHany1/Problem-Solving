//www.hackerrank.com/challenges/diagonal-difference/problem
#include <iostream>

using namespace std;

int main()
{
    int size;
    cin >> size;
    int matrix[size][size];
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            cin >> matrix[i][j];

    int sum1 = 0, sum2 = 0;

    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
        {
            if (i == j)
                sum1 += matrix[i][j];
            if (i + j == size - 1)
                sum2 += matrix[i][j];
        }
    cout << abs(sum1 - sum2);
    return 0;
}
