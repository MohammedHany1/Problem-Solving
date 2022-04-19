//vjudge.net/problem/AtCoder-abc168_a
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int result = num % 10;
    switch (result) {
    case 2:case 4:case 5:case 7:case 9:
        cout << "hon";
        break;
    case 0:case 1:case 6:case 8:
        cout << "pon";
        break;
    case 3:
        cout << "bon";
        break;
    }

}