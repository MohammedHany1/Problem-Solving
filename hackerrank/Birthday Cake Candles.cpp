//www.hackerrank.com/challenges/birthday-cake-candles/problem
#include <iostream>
using namespace std;

int main()
{
    int* array;
    int size;
    cin >> size;
    array = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    int NumberOfCandels = 0;
    for (int i = 0; i < size; i++)
    {
        if (max == array[i])
            NumberOfCandels++;
    }
    cout << NumberOfCandels;

}

