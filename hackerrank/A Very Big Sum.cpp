//www.hackerrank.com/challenges/a-very-big-sum/problem
#include <iostream>
using namespace std;
int main()
{
    int n;
    long int sum = 0.0;
    cin >> n;
    if (n > 10 || n < 1)
        return 0;
    long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << sum;
    return 0;
}

