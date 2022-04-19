//vjudge.net/problem/Gym-102397C#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    string dir;
    cin >> dir;
    for (int i = 0; i < dir.size(); i++)
    {
        if (dir[i] == 'u' || dir[i] == 'U')
            y++;
        if (dir[i] == 'd' || dir[i] == 'D')
            y--;
        if (dir[i] == 'l' || dir[i] == 'L')
            x--;
        if (dir[i] == 'r' || dir[i] == 'R')
            x++;

    }
    cout << x << " " << y << "\n";
    return 0;
}