//vjudge.net/problem/Gym-102397J
#include <iostream>
using namespace std;
int main()
{
    int a, x, b, n; float t, m_capacity, m_number;
    cin >> n >> x >> a;
    t = n;
    m_capacity = a / x;
    m_number = t / m_capacity;
    if (m_number < 1 || m_number == 1)
        cout << "1";
    else
    {
        b = m_number;
        if (m_number > b)
            cout << b + 1;
        else
            cout << b;
    }
    return 0;
}