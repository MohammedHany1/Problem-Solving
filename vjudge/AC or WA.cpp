//vjudge.net/problem/AtCoder-abc152_a
#include <iostream>
using namespace std;

int main()
{
    int numOftests, numOfPassedTests;
    cin >> numOftests >> numOfPassedTests;
    if (numOfPassedTests >= numOftests)
        cout << "Yes";
    else
        cout << "No";
}