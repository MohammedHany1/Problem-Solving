//vjudge.net/problem/AtCoder-abc129_a
#include <iostream>

using namespace std;

int main()
{
    int n, r, t;
    cin >> n >> r >> t;
    int max = 0;
    if (n > max)
        max = n;
    if (r > max)
        max = r;
    if (t > max)
        max = t;
    int sum = 0;
    bool check = false;
    if (max == n)
        cout << r + t;
    else if (max == r)
        cout << n + t;
    else
        cout << n + r;
}