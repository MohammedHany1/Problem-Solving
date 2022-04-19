//vjudge.net/problem/AtCoder-abc159_a
#include <iostream>
using namespace std;

int main()
{
    int evenNum, oddNum;
    cin >> evenNum >> oddNum;
    int sum = 0;
    for (int i = 1; i < evenNum; i++)
        sum += i;
    for (int i = 1; i < oddNum; i++)
        sum += i;
    cout << sum;

}
