//vjudge.net/problem/AtCoder-abc136_b

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++) {
        int temp = (log10(i));
        temp++;
        if (temp % 2 != 0)
            count++;
    }
    cout << count;

    return 0;
}