//www.hackerrank.com/challenges/apple-and-orange/
#include <iostream>
using namespace std;

int main()
{
    int houseStart, houseEnd;
    cin >> houseStart >> houseEnd;
    int appleTree, orangeTree;
    cin >> appleTree >> orangeTree;
    int numOfApples, numOfOragnes;
    cin >> numOfApples >> numOfOragnes;
    int* apples = new int[numOfApples];
    int sumOfApples = 0;
    for (int i = 0; i < numOfApples; i++)
    {
        cin >> apples[i];
        apples[i] += appleTree;
        if (apples[i] <= houseEnd && apples[i] >= houseStart)
            sumOfApples++;
    }
    int* oranges = new int[numOfOragnes];
    int sumOfOranges = 0;
    for (int i = 0; i < numOfOragnes; i++)
    {
        cin >> oranges[i];
        oranges[i] += orangeTree;
        if (oranges[i] <= houseEnd && oranges[i] >= houseStart)
            sumOfOranges++;
    }
    cout << sumOfApples << endl << sumOfOranges << endl;
    return 0;
}