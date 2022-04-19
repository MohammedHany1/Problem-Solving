//www.hackerrank.com/challenges/kangaroo/problem
#include<iostream>
using namespace std;

int main() {
    int x1, x2, v1, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    if (x1 > x2 && v1 >= v2)
        cout << "NO";
    if (x2 > x1 && v2 >= v1)
        cout << "NO";
    if (x1 > x2 && v1 < v2) {

        float denominitor = v2 - v1;
        float fNum = (x1 - x2) / denominitor;
        int iNum = (x1 - x2) / denominitor;
        if (fNum > iNum || iNum < 0)
            cout << "NO";
        else
            cout << "YES";
    }
    if (x2 > x1 && v1 > v2) {

        float denominitor = v1 - v2;
        float fNum = (x2 - x1) / denominitor;
        int iNum = (x2 - x1) / denominitor;
        if (fNum > iNum || iNum < 0)
            cout << "NO";
        else
            cout << "YES";
    }
    if (x1 == x2 && v1 == v2)
        cout << "YES";
    if (x1 == x2 && v1 != v2)
        cout << "NO";

}
