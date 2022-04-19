//www.hackerrank.com/challenges/variable-sized-arrays/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct newArray {

    vector<int> elemntvector;

};
struct qurry {
    int arrayIndex, elemntIndex;
};

int main() {
    int arraySize, qurrySize;
    cin >> arraySize;
    newArray array[arraySize];
    cin >> qurrySize;
    int elemntSize[arraySize];
    for (int i = 0; i < arraySize; i++) {
        cin >> elemntSize[i];
        for (int j = 0; j < elemntSize[i]; j++) {
            int elemntValue;
            cin >> elemntValue;
            array[i].elemntvector.push_back(elemntValue);
        }
    }
    qurry qurryArray[qurrySize];
    for (int i = 0; i < qurrySize; i++) {
        cin >> qurryArray[i].arrayIndex;
        cin >> qurryArray[i].elemntIndex;
    }

    for (int i = 0; i < qurrySize; i++) {
        cout << array[qurryArray[i].arrayIndex].elemntvector[qurryArray[i].elemntIndex] << endl;
    }

    return 0;
}
