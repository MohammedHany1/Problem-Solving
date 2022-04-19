//www.hackerrank.com/challenges/plus-minus/problem
#include <iostream>
using namespace std;
int main()
{
    int number_of_numbers, neg = 0, pst = 0, zer = 0;
    //cout<<" Enter the number of the numbers\n";
    cin >> number_of_numbers;
    float arr[number_of_numbers];
    for (int i = 0; i < number_of_numbers; i++)
    {
        cin >> arr[i];
        if (arr[i] < 0)
            neg++;
        else if (arr[i] > 0)
            pst++;
        else
            zer++;
    }
    float temp = number_of_numbers;
    cout << pst / temp << endl;
    cout << neg / temp << endl;
    cout << zer / temp << endl;

    return 0;
}