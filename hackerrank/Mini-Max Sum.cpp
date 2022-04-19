//www.hackerrank.com/challenges/mini-max-sum/problem
#include <iostream>
using namespace std;
int main()
{
    long arr[5], max = 0, min, max_sum = 0, min_sum = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        if (arr[i] > max)
            max = arr[i];
    }

    for (int i = 0; i < 5; i++)
        min_sum += arr[i];
    min_sum -= max;
    min = max;
    for (int i = 0; i < 5; i++)
        if (min > arr[i])
            min = arr[i];
    for (int i = 0; i < 5; i++)
        max_sum += arr[i];
    max_sum -= min;
    cout << min_sum << " " << max_sum;
    return 0;
}
