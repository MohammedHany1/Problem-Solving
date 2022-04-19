//vjudge.net/problem/CodeForces-579A
#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    int sum = 0;
    while (num > 0)
    {
        if (num % 2 == 1)
            sum++;
        num = num / 2;
    }
    cout << sum << endl;
    return 0;

}