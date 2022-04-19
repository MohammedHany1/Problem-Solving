//www.hackerrank.com/challenges/breaking-best-and-worst-records/problem
#include <iostream>
using namespace std;

int main() {
    int n, max, min, maxCount = 0, minCount = 0;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    max = arr[0];
    min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            maxCount++;
        }
        if (arr[i] < min) {
            min = arr[i];
            minCount++;
        }
    }
    cout << maxCount << " " << minCount;
}
