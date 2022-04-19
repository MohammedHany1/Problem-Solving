//www.hackerrank.com/challenges/grading/problem
#include <iostream>

using namespace std;

int main()
{
    int size;
    cin >> size;
    int* grade = new int[size];
    for (int i = 0; i < size; i++)
        cin >> grade[i];
    for (int i = 0; i < size; i++)
        if ((5 - (grade[i] % 5)) < 3 && grade[i] >= 38)
            grade[i] += 5 - (grade[i] % 5);

    for (int i = 0; i < size; i++)
        cout << grade[i] << endl;
    return 0;
}
