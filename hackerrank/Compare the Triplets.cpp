//www.hackerrank.com/challenges/compare-the-triplets/problem
#include <iostream>
using namespace std;
int main()
{
    int alice[3], bob[3], alice_sum = 0, bob_sum = 0;
    for (int i = 0; i < 3; i++)
        cin >> alice[i];
    for (int i = 0; i < 3; i++)
        cin >> bob[i];
    for (int i = 0; i < 3; i++)
        if (alice[i] > bob[i])
            alice_sum++;
        else if (alice[i] < bob[i])
            bob_sum++;
    int result[] = { alice_sum, bob_sum };
    for (int i = 0; i < 2; i++)
        cout << result[i] << " ";
    return 0;
}
