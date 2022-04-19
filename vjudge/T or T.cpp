//vjudge.net/problem/AtCoder-abc133_a
#include <iostream>

using namespace std;

int main()
{
    int n, r, t;
    cin >> n >> r >> t;
    if (n * r < t)
        cout << n * r;
    else
        cout << t;
}