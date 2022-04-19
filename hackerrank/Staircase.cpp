//www.hackerrank.com/challenges/staircase/problem
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int m = n; m - 1 > i; m--)
            cout << " ";
        for (int f = 0; f <= i; f++)
            cout << "#";

        cout << endl;
    }

    return 0;
}
