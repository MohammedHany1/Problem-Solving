//www.hackerrank.com/challenges/time-conversion/problem
#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    if (s[s.size() - 2] == 'A') {
        int num = stoi(s.substr(0, 2));
        if (num == 12)
            s.replace(0, 2, "00");
        return s.substr(0, s.size() - 2);
    }
    else {
        int num = stoi(s.substr(0, 2));
        num += 12;
        if (num > 24)
            num -= 24;
        else if (num == 24)
            num = 12;
        string str = to_string(num);
        s.replace(0, 2, str);
        return s.substr(0, s.size() - 2);
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
