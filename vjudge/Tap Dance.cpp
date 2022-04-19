//vjudge.net/problem/AtCoder-abc141_b
#include <iostream>
using namespace std;

int main()
{
    string a;
    cin >> a;
    bool check = true;
    for (int i = 0; i < a.size(); i++) {
        if ((i + 1) % 2 == 0) {
            if (a[i] == 'L' || a[i] == 'U' || a[i] == 'D') {
                continue;
            }
            else {
                cout << "No";
                check = false;
                break;
            }
        }
        else {
            if (a[i] == 'R' || a[i] == 'U' || a[i] == 'D') {
                continue;
            }
            else {
                cout << "No";
                check = false;
                break;
            }
        }

    }
    if (check)
        cout << "Yes";
}