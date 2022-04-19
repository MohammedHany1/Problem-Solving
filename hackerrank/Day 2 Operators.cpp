//www.hackerrank.com/challenges/30-operators/problem
#include <iostream>

using namespace std;

int main()
{
    float total;
    double base, prof, tax;
    cin >> base >> prof >> tax;
    prof /= 100;
    tax /= 100;
    total = base * (1 + prof + tax);
    int total1 = total + 1;
    int total2 = total + 0.5;
    int total3 = total;
    if (total2 == total1)
        cout << total2;
    else
        cout << total3;
    return 0;
}
