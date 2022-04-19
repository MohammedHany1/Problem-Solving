//vjudge.net/problem/AtCoder-abc198_b
#include <iostream>
#include<string>  
#include<sstream>
#include <vector>
using namespace std;
int main()
{
	int num;
	cin >> num;
	string numString = to_string(num);
	vector <int> n;
	for (int i = 0; i < numString.length(); i++) {
		n.push_back((int)numString[i] - '0');
	}
	int r, sum = 0, temp;
	temp = num;
	while (num > 0)
	{
		r = num % 10;
		sum = (sum * 10) + r;
		num = num / 10;
	}
	if (temp == sum) {
		cout << "Yes";
	}
	else
	{
		int count1 = 0;
		int count2 = 0;
		for (int i = n.size() - 1; i >= 0; i--) {
			if (n[i] == 0) {
				count1++;
			}
			else {
				for (int j = 0; j < n.size(); j++) {
					if (n[j] == 0) {
						count2++;
					}
					else {
						if (count1 == count2) {
							cout << "No";
							exit(0);
						}
						else if (count1 > count2) {
							string num2;
							for (int k = count2; k < n.size() - count1; k++) {
								num2 += to_string(n[k]);
							}
							stringstream geek(num2);
							int numInt = 0;
							geek >> numInt;
							int r2, sum2 = 0, temp2;
							temp2 = numInt;
							while (numInt > 0)
							{
								r2 = numInt % 10;
								sum2 = (sum2 * 10) + r2;
								numInt = numInt / 10;
							}
							if (temp2 == sum2)
								cout << "Yes";
							else
								cout << "No";
							exit(0);
						}
					}
				}
			}
		}
	}

}