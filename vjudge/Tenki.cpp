//vjudge.net/problem/AtCoder-abc139_a
#include <iostream>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int count = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == b[i])
            count++;
    }
    cout << count;
}