//vjudge.net/problem/AtCoder-abc142_b
#include <iostream>
using namespace std;

int main()
{
    int n, k;
    int count = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        if (temp >= k)
            count++;
    }
    cout << count;

}