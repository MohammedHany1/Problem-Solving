//vjudge.net/problem/AtCoder-abc154_b
#include <iostream>
using namespace std;
int main()
{
	string S;
	cin >> S;
	for (int i = 0; i < S.length(); i++) {
		S[i] = 'x';
	}
	cout << S;
}