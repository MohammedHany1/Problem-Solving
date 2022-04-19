//vjudge.net/problem/AtCoder-abc156_a
#include <iostream>

using namespace std;

int main()
{
    int numOfContests, displayedRating;
    cin >> numOfContests >> displayedRating;
    if (numOfContests >= 10)
        cout << displayedRating;
    else
        cout << displayedRating + (100 * (10 - numOfContests));
    return 0;
}