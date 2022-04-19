//vjudge.net/problem/AtCoder-abc171_a
#include <iostream>
using namespace std;

int main()
{
    char letter;
    cin >> letter;
    if (int(letter) >= 65 && int(letter) <= 90)
        cout << "A";
    else if (int(letter) >= 97 && int(letter) <= 122)
        cout << "a";
}