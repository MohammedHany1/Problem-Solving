//vjudge.net/problem/AtCoder-abc173_a
#include <iostream>

using namespace std;

int main()
{
    int price;
    cin >> price;
    if (price % 1000 == 0)
        cout << "0";
    else
        cout << 1000 - (price % 1000);

    return 0;
}