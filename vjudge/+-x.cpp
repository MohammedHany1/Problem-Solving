//vjudge.net/problem/AtCoder-abc137_a
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    int max = -99999999;
    cin >> a >> b;
    if (a + b > max)
        max = a + b;
    if (a - b > max)
        max = a - b;
    if (a * b > max)
        max = a * b;
    cout << max;
}