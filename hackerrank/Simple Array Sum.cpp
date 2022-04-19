//www.hackerrank.com/challenges/simple-array-sum/problem
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    int arr[n];
    if (n > 1000)
        return 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << sum;
    return 0;
}
