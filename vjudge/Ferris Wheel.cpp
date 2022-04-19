//vjudge.net/problem/AtCoder-abc127_a
#include <iostream>

using namespace std;

int main()
{
    int age;
    float cost;
    cin >> age >> cost;
    if (age >= 13)
        cout << cost;
    else if (age >= 6)
        cout << cost / 2;
    else
        cout << 0;
    return 0;
}