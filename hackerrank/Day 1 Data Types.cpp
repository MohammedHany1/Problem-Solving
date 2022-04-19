//www.hackerrank.com/challenges/30-data-types/problem
#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int i1;
    double d1;
    string s1;
    cin >> i1 >> d1;
    getline(cin, s1);
    getline(cin, s1);
    cout << i + i1 << endl;
    cout << d + d1;
    int ii = d1;
    if (d1 == ii)
        cout << ".0" << endl;
    else
        cout << "\n";
    cout << s << s1 << endl;

    return 0;
}